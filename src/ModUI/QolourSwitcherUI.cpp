#include "main.hpp"
#include "QolourSwitcherConfig.hpp"
#include "ModUI/QolourSwitcherUI.hpp"
using namespace QolourSwitcher;


#include "questui/shared/BeatSaberUI.hpp"
#include "questui/shared/QuestUI.hpp"
using namespace QuestUI;

#include "UnityEngine/GameObject.hpp"
using namespace UnityEngine;
using namespace GlobalNamespace;

#include "GlobalNamespace/PlayerDataModel.hpp"
#include "GlobalNamespace/PlayerData.hpp"
#include "GlobalNamespace/ColorScheme.hpp"
#include "GlobalNamespace/ColorSchemesSettings.hpp"


DEFINE_TYPE(QolourSwitcher, QolourSwitcherUI);


GameObject *leftScreen;
bool screenOn = false;

void QolourSwitcher::QolourSwitcherUI::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)
{

   auto playerDataModel = Object::FindObjectOfType<PlayerDataModel *>();
   auto playerData = playerDataModel->playerData;
   auto colourScheme = playerData->colorSchemesSettings->GetColorSchemeForId(playerData->colorSchemesSettings->selectedColorSchemeId);

   if (firstActivation)
   {
      GameObject *centreScreen = BeatSaberUI::CreateScrollView(get_transform());
      leftScreen = QuestUI::BeatSaberUI::CreateFloatingScreen(Vector2(60.0f, 70.0f), Vector3(-2.1f, 1.0f, 2.8f), Vector3(0.0f, -35.0f, 0.0f), 0.0f, true, false);

      // Mod Toggle Switch
      BeatSaberUI::CreateToggle(leftScreen->get_transform(), "Disable Qolour Switcher", getModConfig().ModToggle.GetValue(), Vector2(0.0f, -5.0f), [](bool value)
      {
         getModConfig().ModToggle.SetValue(value);
      });



      // Colour Picker Creators
      BeatSaberUI::CreateColorPicker(centreScreen->get_transform(), "Left Saber Colour", colourScheme->get_saberAColor(), [colourScheme](Color colour)
      {
         colourScheme->saberAColor = colour;
      });

      BeatSaberUI::CreateColorPicker(centreScreen->get_transform(), "Right Saber Colour", colourScheme->get_saberBColor(), [colourScheme](Color colour)
      {
         colourScheme->saberBColor = colour;
      });
   }

   if (!screenOn)
   {
      screenOn = true;
      leftScreen->SetActive(true);
   }


}

void QolourSwitcher::QolourSwitcherUI::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)
{
   screenOn = false;
   leftScreen->SetActive(false);
}
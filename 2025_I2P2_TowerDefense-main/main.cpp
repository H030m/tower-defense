// [main.cpp]
// This is the entry point of your game.
// You can register your scenes here, and start the game.
#include "Engine/GameEngine.hpp"
#include "Engine/LOG.hpp"
#include "Scene/LoseScene.hpp"
#include "Scene/PlayScene.hpp"
#include "Scene/StageSelectScene.hpp"
#include "Scene/WinScene.hpp"
#include "Scene/StartScene.h"
#include "Scene/SettingsScene.hpp"
#include "Scene/ScoreboardScene.hpp"
#include "Scene/SubmitScene.hpp"

int main(int argc, char **argv) {
	Engine::LOG::SetConfig(true);
	Engine::GameEngine& game = Engine::GameEngine::GetInstance();

    // TODO HACKATHON-2 (2/3): Register Scenes here
    game.AddNewScene("stage-select", new StageSelectScene());
	game.AddNewScene("play", new PlayScene());
	game.AddNewScene("lose", new LoseScene());
	game.AddNewScene("win", new WinScene());
	game.AddNewScene("settings", new SettingsScene());
	game.AddNewScene("scoreboard-scene", new ScoreboardScene());
	game.AddNewScene("submit-scene", new SubmitScene());
    // TODO HACKATHON-1 (1/1): Change the start scene
	game.AddNewScene("start", new StartScene());
	game.Start("start", 60, 1600, 832);
	return 0;
}

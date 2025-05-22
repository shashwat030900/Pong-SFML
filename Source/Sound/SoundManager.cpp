#include "../../Header/Sound/SoundManager.h"
#include <iostream>

using namespace Sound;

// Static member definitions
sf::Music SoundManager::backgroundMusic;
sf::Sound SoundManager::soundEffect;
sf::SoundBuffer SoundManager::ballBounce;

float SoundManager::backgroundMusicVolume = 50.0f;
const std::string SoundManager::bgmPath = "Assets/Sounds/Pong_bgm.mp3";
const std::string SoundManager::ballBouncePath = "Assets/Sounds/ball_bounce.wav";

void SoundManager::Initialize() {
	LoadSoundFromFile();
	PlayBackgroundMusic();
}

void SoundManager::LoadSoundFromFile() {
	if (!ballBounce.loadFromFile(ballBouncePath)) {
		std::cerr << "Failed to load ball bounce sound!" << std::endl;
	}
	soundEffect.setBuffer(ballBounce);

	if (!backgroundMusic.openFromFile(bgmPath)) {
		std::cerr << "Failed to load background music!" << std::endl;
	}
}

void SoundManager::PlayBackgroundMusic() {
	backgroundMusic.setLoop(true);
	backgroundMusic.setVolume(backgroundMusicVolume);
	backgroundMusic.play();
}

void SoundManager::PlaySoundEffects(SoundType sound) {
	switch (sound) {
	case SoundType::BALL_BOUNCE:
		soundEffect.play();
		break;
	}
}

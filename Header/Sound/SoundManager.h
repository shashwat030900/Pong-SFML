#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>

namespace Sound {

	enum class SoundType {
		BALL_BOUNCE
	};

	class SoundManager {
	private:
		static sf::Music backgroundMusic;
		static sf::Sound soundEffect;
		static sf::SoundBuffer ballBounce;

		static float backgroundMusicVolume;
		static const std::string bgmPath;
		static const std::string ballBouncePath;

		
		static void LoadSoundFromFile();

	public:
		static void Initialize();
		static void PlaySoundEffects(SoundType sound);
		static void PlayBackgroundMusic();
	};
}


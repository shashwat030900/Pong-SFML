#pragma once
#include <SFML/Graphics.hpp>
#include <chrono>

namespace Utility {

	class TimeService {

	private:
		std::chrono::steady_clock::time_point previous_time;
		float delta_time;
		
		void updateDeltaTime();
		void updatePreviousTime();
		float calculateDeltaTime();

	public: 
		void intialize();
		void update();
		float getDeltaTime();

	};


}
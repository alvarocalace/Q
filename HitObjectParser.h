#pragma once
#include "HitObject.h"
#include "Beatmap.h"
#include "Utilities.h"

class HitObjectParser
{
	Beatmap mBeatmap;
	Utilities mUtilities;
public:
	HitObjectParser(Beatmap);
	~HitObjectParser();
	HitObject parse_hitobject(std::string);
private:
	std::vector<SliderMovement> parse_slider_movements(std::string, int, int, int, int);
	std::vector<SliderMovement> parse_linear_slider(std::string, int, int, int, int);
	double calculate_length(std::pair<int, int>, std::pair<int, int>);
};
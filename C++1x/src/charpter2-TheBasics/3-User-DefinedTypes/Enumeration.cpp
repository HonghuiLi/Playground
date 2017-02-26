/*Enumeration.cpp*/

#include "Enumeration.h"

// TrafficLight& TrafficLight::operator ++(TrafficLight& t) {
TrafficLight& operator++ (TrafficLight& t) {
	TrafficLight light = TrafficLight::Yellow;
	switch(t) {
		case TrafficLight::Green:   light = TrafficLight::Yellow;
		break;
		case TrafficLight::Yellow:  light = TrafficLight::Red;
		break;
		case TrafficLight::Red:       light =  TrafficLight::Green;
		break;
	}
	return light;
}

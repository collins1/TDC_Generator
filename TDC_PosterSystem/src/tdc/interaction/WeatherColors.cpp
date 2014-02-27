//
//  WeatherColors.cpp
//  TDC_PosterSystem
//
//  Created by Brett Renfer on 2/20/14.
//
//

#include "WeatherColors.h"

WeatherColors & weather(){
    static WeatherColors theWeather = WeatherColors();
    return theWeather;
}
WeatherColors::WeatherColors(){
    colors[0] = ofColor::mediumPurple;
    colors[1] = ofColor::darkBlue;
    colors[2] = ofColor::darkBlue;
    colors[3] = ofColor::cadetBlue;
    colors[4] = ofColor::darkGrey;
    colors[5] = ofColor::ghostWhite;
    colors[26] = ofColor::dimGray;
}


ofPoint WeatherColors::getIntensity( int condition ){
    ofPoint toRet;
    
    switch (condition) {
        case 0:  //tornado
        case 1:  //tropical storm
        case 2:  //hurricane
        case 3:  //severe thunderstorms
            toRet.set(1.0,1.0,1.0);
            break;
        case 4:  //thunderstorms
            toRet.set(.1,1.0,0.1);
            break;
        case 5:  //mixed rain and snow
        case 6:  //mixed rain and sleet
        case 7:  //mixed snow and sleet
            toRet.set(.3,1.0,0.0);
            break;
        case 8:  //freezing drizzle
        case 9:  //drizzle
        case 10:  //freezing rain
            toRet.set(.3,.5,0.1);
            break;
        case 11:  //showers
        case 12:  //showers
            toRet.set(.5,.5,0.0);
            break;
        case 13:  //snow flurries
        case 14:  //light snow showers
        case 15:  //blowing snow
            toRet.set(.3,.3,.3);
            break;
        case 16:  //snow
            toRet.set(.1,.1,0.0);
            break;
        case 17:  //hail
            toRet.set(.1,1.0,0.1);
            break;
        case 18:  //sleet
            toRet.set(.1,1.0,0.1);
            break;
        case 19:  //dust
            toRet.set(.1,0.0,0.1);
            break;
        case 21:  //haze
        case 22:  //smoky
        case 20:  //foggy
            toRet.set(.1,.1,0.1);
            break;
        case 23:  //blustery
        case 24:  //windy
            toRet.set(.5,.5,0.5);
            break;
        case 25:  //cold
        case 26:  //cloudy
            toRet.set(0.0,0.0,0.0);
            break;
        case 27:  //mostly cloudy (night)
        case 28:  //mostly cloudy (day)
        case 29:  //partly cloudy (night)
        case 30:  //partly cloudy (day)
        case 31:  //clear (night)
            toRet.set(0.0,0.0,0.0);
            break;
        case 32:  //sunny
            toRet.set(0.0,0.0,.2);
            break;
        case 33:  //fair (night)
        case 34:  //fair (day)
            toRet.set(0.0,0.0,0.1);
            break;
        case 35:  //mixed rain and hail
            toRet.set(.5,0.5,.5);
            break;
        case 36:  //hot
            toRet.set(0.0,0.0,0.0);
            break;
        case 37:  //isolated thunderstorms
        case 38:  //scattered thunderstorms
        case 39:  //scattered thunderstorms
        case 40:  //scattered showers
            toRet.set(.2,0.2,0.0);
            break;
        case 41:  //heavy snow
            toRet.set(0.2,0.7,0.0);
            break;
        case 42:  //scattered snow showers
            toRet.set(0.2,0.4,0.0);
            break;
        case 43:  //heavy snow
            toRet.set(0.2,0.7,0.0);
            break;
        case 44:  //partly cloudy
            toRet.set(0.0,0.0,0.1);
            break;
        case 45:  //thundershowers
            toRet.set(0.1,0.5,0.0);
            break;
        case 46:  //snow showers
            toRet.set(0.2,0.3,0.0);
            break;
        case 47:  //isolated thundershowers:
            toRet.set(0.1,0.1,0.0);
            break;
        default:
        break;
    }
    
    return toRet;
}

//WeatherColors[0] = ofColor::mediumPurple;  //ofColor(10,10,10);
/*
 0:  //tornado
 1:  //tropical storm
 2:  //hurricane
 3:  //severe thunderstorms
 4:  //thunderstorms
 5:  //mixed rain and snow
 6:  //mixed rain and sleet
 7:  //mixed snow and sleet
 8:  //freezing drizzle
 9:  //drizzle
 10:  //freezing rain
 11:  //showers
 12:  //showers
 13:  //snow flurries
 14:  //light snow showers
 15:  //blowing snow
 16:  //snow
 17:  //hail
 18:  //sleet
 19:  //dust
 20:  //foggy
 21:  //haze
 22:  //smoky
 23:  //blustery
 24:  //windy
 25:  //cold
 26:  //cloudy
 27:  //mostly cloudy (night)
 28:  //mostly cloudy (day)
 29:  //partly cloudy (night)
 30:  //partly cloudy (day)
 31:  //clear (night)
 32:  //sunny
 33:  //fair (night)
 34:  //fair (day)
 35:  //mixed rain and hail
 36:  //hot
 37:  //isolated thunderstorms
 38:  //scattered thunderstorms
 39:  //scattered thunderstorms
 40:  //scattered showers
 41:  //heavy snow
 42:  //scattered snow showers
 43:  //heavy snow
 44:  //partly cloudy
 45:  //thundershowers
 46:  //snow showers
 47:  //isolated thundershowers
 3200:  //not available
 */
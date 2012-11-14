//
//  CCJSONConverter.h
//  cocos2d-x-jc
//
//  Created by LIN BOYU on 11/14/12.
//
//

#ifndef __cocos2d_x_jc__CCJSONConverter__
#define __cocos2d_x_jc__CCJSONConverter__

#include "cJSON.h"
#include "CCJSONData.h"

class CCJSONConverter : public CCObject {
    
public:
    static CCJSONConverter * sharedConverter();
    
    char * strFrom(CCDictionary * dictionary);
    
    CCDictionary * dictionaryFrom(const char * str);
    
private:
    void convertJsonToDictionary(cJSON *json, CCDictionary *dictionary);
    
    void convertDictionaryToJson(CCDictionary *dictionary, cJSON *json);
    
    void convertJsonToArray(cJSON * json, CCArray * array);
    
    void convertArrayToJson(CCArray * array, cJSON * json);
    
    cJSON * getObjJson(CCObject * obj);
    
    CCObject * getJsonObj(cJSON * json);
};

#endif /* defined(__cocos2d_x_jc__CCJSONConverter__) */
//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : 211506359
//  @ File Name : StaticData.h
//  @ Date : 2017/9/29
//  @ Author : ������
//
//


#if !defined(_STATICDATA_H)
#define _STATICDATA_H


class StaticData {
public:
	static StaticData* sharedStaticData();
	static void purge();
	int intValueForKey(const std::string &key);
	cont char* stringValueFromKey(const std::string &key);
	float floatValueFromKey(const std::string &key);
	bool booleanFromKey(const std::string &key);
	cocos2d::CCPoint pointFromKey(const std::string &key);
	cocos2d::CCRect rectFromKey(const std::string &key);
	cocos2d::CCSize sizeFormKey(const std::string &key);
protected:
	cocos2d::CCDictionary* _dictionary;
	std::string _staticFileName;
	bool init();
private:
	~StaticData();
	StaticData();
};

#endif  //_STATICDATA_H

#include <iostream>
#include <string>
int strings() {
	const char* str = "gautam";   //default 1 byte 
	const char* str1 = u8"gautam"; //1 byte
	const char16_t* str2 = u"gautam"; //2 byte
	const char32_t* str3 = U"gautam"; //4 byte
	const wchar_t* str4 = L"gautam";  // 2 byte   //wchar_t --> uses any particular encoding, such as UTF-16

	const char* example = R"(Line1            
Line2
Line 3)";    //write like a paragraph
	std::cout << example << std::endl;
	char name[8] = { 'g','a','u','t','a','m' };
	
	std::cout << name<<std::endl;
	std::cout << str<<std::endl;

	std::string st = "hello";   //concatenate - way 1
	st += " world";
	
	st = "world"+std::string("gautam") +std::string("hello");   //concatenate - way 2
	std::cout << st << std::endl;

	int contains = st.find("ut") != std::string::npos;   //npos in undefined position of string ie "end of string" 
	std::cout << contains;
	return 0;
}
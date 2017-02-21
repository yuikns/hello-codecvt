// Example program
#include <iostream>
#include <string>

#include <codecvt>
#include <string>

// convert UTF-8 string to wstring
std::wstring utf8_to_wstring (const std::string& str)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
    return myconv.from_bytes(str);
}

// convert wstring to UTF-8 string
std::string wstring_to_utf8 (const std::wstring& str)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
    return myconv.to_bytes(str);
}

int main()
{
  std::string name = "中文字符";
  std::cout << "Hello, [NO] " << name << "!" << std::endl;

  std::wstring ws_name = utf8_to_wstring(name);
  
  std::cout << "length:" << name.size() << " vs. " << ws_name.size()<< std::endl;
  for(wchar_t c : ws_name) {
      std::cout << "wchar:" << (int) c << std::endl;
  }
  //std::cout << "Hello, [WS] " << ws_name << "!" << std::endl;
    
  std::string u8_name = wstring_to_utf8(ws_name);
  std::cout << "Hello, [BA] " << u8_name << "!" << std::endl;
  
  return 0;
}




# C++ bencode parser (using [nlohmann/json](https://github.com/nlohmann/json))

This is a simple parser made for those that are trying to make their own torrent client ;)
If you want the string data to be readable, leave the code as is.
But if you would prefer **string data in bytes**, then you can uncomment the marked lines in the `decode_bencoded_string()` function in any of the `bencode_parser` files. 

## Installation
All you need to do is include either the `bencode_parser.hpp` or the `bencode_parser.cpp` along with the `json.hpp` file.

## Example
```c++
#include "./bencode_parser.hpp"
#include "./json.hpp"

int main(void) {
    std::string encoded_value = "d4:name9:some name6:thingsi256e4:listli1ei2e5:three4:fouri5eee";
    nlohmann::json data = decode_bencode(encoded_value);
    std::cout << data.dump() << '\n';
}
```

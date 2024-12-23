#include "./bencode_parser.hpp"
#include "./json.hpp"

int main(void) {
    std::string encoded_value = "d4:name9:some name6:thingsi256e4:listli1ei2e5:three4:fouri5eee";
    nlohmann::json data = decode_bencode(encoded_value);
    std::cout << data.dump() << '\n';
}

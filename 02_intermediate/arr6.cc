#include<iostream>
#include<array>
#include<vector>

namespace Animal{
    enum animals{
    chicken,
    dog,
    cat,
    elephant,
    duck,
    snake
    }
    struct Data
    {
        std::string_view name{};
        int legs{};
        std::string_view sound{};
    };

    constexpr std::array types { chicken, dog, cat, elephant, duck, snake };
    constexpr std::array<Data, max_animals> data {{
        { "chicken",    2, "cluck" },
        { "dog",        4, "woof" },
        { "cat",        4, "meow" },
        { "elephant",   4, "pawoo" },
        { "duck",       2, "quack" },
        { "snake",      0, "hissss" },
    }};

    static_assert(std::size(types) == max_animals);
    static_assert(std::size(data) == max_animals);
}

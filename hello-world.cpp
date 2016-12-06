#include <cstdio>

int main() {
    auto pf = [](int x){
        printf("Hello world! :%d\n", x);
    };

    pf(108);
    pf(42);
}

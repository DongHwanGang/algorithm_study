#include <bits/stdc++.h>
using namespace std;

int main () {
    int chr[26] = {0}, in, out;
    char str[101] = "";

    scanf("%s", str);

    for(in = 0; str[in] != '\0'; in++)
        chr[str[in] - 'a'] += 1;

    for(out = 0; out < 26; out++)
        printf("%d ", chr[out]);
}
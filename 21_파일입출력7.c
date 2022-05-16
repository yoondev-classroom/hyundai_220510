
#include <stdio.h>

typedef struct user {
    char name[32];
    int age;
} USER;

#if 0
int main(void)
{
    USER user[] = {
        { "Tom", 42 },
        { "Alice", 10 },
        { "Bob", 22 },
        { "Tom", 42 },
        { "Alice", 10 },
        { "Bob", 22 },
        { "Tom", 42 },
        { "Alice", 10 },
        { "Bob", 22 },
    };

    FILE* fp = fopen("user.bin", "wb");
    if (fp == NULL) {
        return 1;
    }

    fwrite(user, sizeof(USER), sizeof(user) / sizeof(user[0]), fp);
    fclose(fp);

    return 0;
}
#endif

#if 1
int main(void)
{
    USER user[10];

    FILE* fp = fopen("user.bin", "rb");
    if (fp == NULL) {
        return 1;
    }

#if 0
    fread(user, sizeof(USER), 3, fp);
#endif

    int n = 0;
    while (!feof(fp)) {
        int ret = fread(user + n, sizeof(USER), 1, fp);
        printf("ret: %d\n", ret);
        if (ret > 0) {
            ++n;
        }
    }
    printf("%d\n", n);

    for (int i = 0; i < n; ++i) {
        printf("%s - %d\n", user[i].name, user[i].age);
    }

    fclose(fp);

    return 0;
}
#endif
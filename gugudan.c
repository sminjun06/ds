#include <stdio.h>

int main(void) {
    int dan;
    printf("출력할 단수를 입력하세요 (1~9): ");
    if (scanf("%d", &dan) != 1) {
        printf("숫자를 입력하세요.\n");
        return 1;
    }

    if (dan < 1 || dan > 9) {
        printf("유효한 단수(1~9)를 입력하세요.\n");
        return 1;
    }

    printf("%d단\n", dan);
    for (int i = 1; i <= 9; ++i) {
        printf("%d x %d = %d\n", dan, i, dan * i);
    }

    return 0;
}

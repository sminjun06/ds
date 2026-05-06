# 구구단 프로그램

입력한 단수에 대해 1부터 9까지의 곱셈 결과를 출력하는 구구단 프로그램입니다.

## C 코드 예제

```c
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
```

## Java 코드 예제

```java
import java.util.Scanner;

public class Gugudan {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("출력할 단수를 입력하세요 (1~9): ");

        if (!scanner.hasNextInt()) {
            System.out.println("숫자를 입력하세요.");
            scanner.close();
            return;
        }

        int dan = scanner.nextInt();
        scanner.close();

        if (dan < 1 || dan > 9) {
            System.out.println("유효한 단수(1~9)를 입력하세요.");
            return;
        }

        System.out.println(dan + "단");
        for (int i = 1; i <= 9; i++) {
            System.out.println(dan + " x " + i + " = " + (dan * i));
        }
    }
}
```

## 사용 예

- 입력: `3`
- 출력:
  - `3 x 1 = 3`
  - `3 x 2 = 6`
  - ...
  - `3 x 9 = 27`

## 실행 방법

- C: `gcc gugudan.c -o gugudan && ./gugudan`
- Java: `javac Gugudan.java && java Gugudan`

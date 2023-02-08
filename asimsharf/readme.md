# Codersrank Summary Widget

[![Codersrank Summary](https://cr-ss-service.azurewebsites.net/api/ScreenShot?widget=summary&username=asimsharf&badges=5&show-avatar=true&style=--header-bg-color:%23000;--border-radius:5px)](https://profile.codersrank.io/user/asimsharf) 
 
[![Codersrank Summary](https://cr-skills-chart-widget.azurewebsites.net/api/api?username=asimsharf)](https://profile.codersrank.io/user/asimsharf)

# Calculate Sum Of Square

- Pseudo Code

```Pseudo Code
    sum = 0
    num = 0
    i = 0
    while i < 10
       read num
       if num < 0
           break
       else
           sum = sum + num
           i = i + 1
       end while
       print sum
```

- C Code

```c
#include <stdio.h>
int main()
{
    int sum = 0;
    int num = 0;
    int i = 0;
    while (i < 10)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        else
        {
            sum = sum + num;
            i = i + 1;
        }
    }
    printf("%d", sum);
    return 0;
}
```

- Flowchart

```flowchart
    1. start
    2. sum = 0
    3. num = 0
    4. i = 0
    5. goto 6
    6. if i < 10 goto 7 else goto 12
    7. read num
    8. if num < 0 goto 12 else goto 9
    9. sum = sum + num
    10. i = i + 1
    11. goto 6
    12. print sum
    13. stop
```

# Read Three Numbers

- Pseudo Code

```Pseudo Code
    read a
    read b
    read c
    if a > b
        if a > c
            print a
        else
            print c
        end if
    else
        if b > c
            print b
        else
            print c
        end if
    end if
```

- C Code

```c
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    return 0;
}
```

- Flowchart

```flowchart
    1. start
    2. read a
    3. read b
    4. read c
    5. if a > b goto 6 else goto 9
    6. if a > c goto 7 else goto 8
    7. print a
    8. print c
    9. if b > c goto 10 else goto 11
    10. print b
    11. print c
    12. stop
```

# Calculate Rinngin Sum

- Pseudo Code

```Pseudo Code
    read n
    sum = 0
    i = 1
    while i <= n
        sum = sum + i
        i = i + 1
    end while
    print sum
```

- C Code

```c
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("%d", sum);
    return 0;
}
```

- Flowchart

```flowchart
    1. start
    2. read n
    3. sum = 0
    4. i = 1
    5. goto 6
    6. if i <= n goto 7 else goto 9
    7. sum = sum + i
    8. i = i + 1
    9. print sum
    10. stop
```

# Calculate Factorial

- Pseudo Code

```Pseudo Code
    read n
    fact = 1
    i = 1
    while i <= n
        fact = fact * i
        i = i + 1
    end while
    print fact
```

- C Code

```c
#include <stdio.h>
int main()
{
    int n, fact = 1, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        fact = fact * i;
        i = i + 1;
    }
    printf("%d", fact);
    return 0;
}
```

- Flowchart

```flowchart
    1. start
    2. read n
    3. fact = 1
    4. i = 1
    5. goto 6
    6. if i <= n goto 7 else goto 9
    7. fact = fact * i
    8. i = i + 1
    9. print fact
    10. stop
```

# Calculate Fibonacci

- Pseudo Code

```Pseudo Code
    read n
    a = 0
    b = 1
    i = 1
    while i <= n
        c = a + b
        a = b
        b = c
        i = i + 1
    end while
    print c
```

- C Code

```c
#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, i = 1, c;
    scanf("%d", &n);
    while (i <= n)
    {
        c = a + b;
        a = b;
        b = c;
        i = i + 1;
    }
    printf("%d", c);
    return 0;
}
```

- Flowchart

```flowchart
    1. start
    2. read n
    3. a = 0
    4. b = 1
    5. i = 1
    6. goto 7
    7. if i <= n goto 8 else goto 11
    8. c = a + b
    9. a = b
    10. b = c
    11. i = i + 1
    12. print c
    13. stop
```
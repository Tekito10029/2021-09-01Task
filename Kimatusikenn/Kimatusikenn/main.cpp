/*
※試験時間は90分です。
試験中にわからないこと(関数名やinclude名など)があれば、
ネットや本で調べてもらって構いません。
問題の意図が理解できない場合は先生に質問してもらって構いません。
他の生徒と会話することや、解答を見せてもらうことは禁止です。

試験時間80分を経過した時点で、gitにて提出を始めてください。
それまでは問題を解くか、別の作業をしてもかまいませんが、
試験時間80分未満での提出はできません。
*/
#include <iostream>
#include<stdio.h>

/*
第１問(一問2点)
以下の計算に2進数で答えよ。
00101100 + 01010101
10110000 + 00001111
*/

/*
回答
10000001
10111111
*/


/*
第２問(一問2点)
第１問の答えを10進数で答えよ
*/

/*
回答
129
191
*/


/*
第３問(一問2点)
char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
*/

/*
回答
char 1バイト
int 4バイト
float 4バイト
double 8バイト
*/

/*
第４問(一問2点)
char* 、int * 、float * 、double * のバイトサイズはそれぞれいくつか答えよ。
*/

/*
回答
char* 8バイト
int* 8バイト
float* 8バイト
double* 8バイト
*/

/*
第５問(20点)
以下のプログラムを実行した場合、
①～③のどの部分が実行されるか答えよ。
int main()
{
    int num = 5;

    num = num % 3;

    if (num == 0)
    {
        ① 
    }
    else if (num == 2)
    {
        ②
    }
    else
    {
        ③
    }
}
*/

/*
回答
②
*/

/*
第６問(25点)
数値を2つ入力し、
1番目に入力された値が奇数なら足し算、
1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。

結果)
1 // 1番目に入力された値
5 // 2番目に入力された値
6 // 1番目が奇数なので足し算

4 // 1番目に入力された値
3 // 2番目に入力された値
1 // 1番目が偶数なので引き算
*/

/*
回答

int main(void)
{
  int a;
  int b;
  int c;

  std::cout << "数を2つ入力してください\n"<<"一つ目の数字を入力してください\n";
  std::cin >> a;
  std::cout << "二つ目の数字を入力してください\n";
  std::cin >> b;
  
  if( a % 2 == 0 )
  {
      c = a - b;
      std::cout << "結果(引き算)\n" << c;
  } 
  if(a%2 ==1)
  {
    c = a + b;
    std::cout << "結果(足し算)\n" << c;
  }
  return 0;
}

*/

/*
第７問(25点)
第６問のプログラムをループで行うようにし、
endと入力された場合終了するようにしてください。
endの入力は1番目の値の場所でも、2番目の値の場所でも、
別途endの入力を受け付けるようでもどれでもいいです。
どこか一か所でendと入力して終了していれば正解とします。
*/

/*回答
struct Calc
{
public:
    int     GetNum1() { return num1; }
    int     GetNum2() { return num2; }
    void    SetNum1(int setNum) { num1 = setNum; }
    void    SetNum2(int setNum) { num2 = setNum; }

    int     Add() { return num1 + num2; }
    int     Sub() { return num1 - num2; }
    int     Mul() { return num1 * num2; }
    int     Div();
    int     Sur() { return num1 % num2; }

private:
    int num1, num2;
};

int Calc::Div()
{
    if (num2 == 0)
    {
        return -1;
    }

    return num1 / num2;
}

bool IsStrCmp(const char* s1, const char* s2);
int main()
{
    int firstNum = 0;
    int secondNum = 0;
    char str[4] = {};  // {}は4つ全部0で初期化
    int ans = 0;
    bool endFlag = false;
    int result1, result2, result3 = -1;
    Calc calc;

    do
    {

        printf("数値1を入力してください\n");
        result1 = scanf_s("%d", &firstNum);
        printf("数値2を入力してください\n");
        result2 = scanf_s("%d", &secondNum);
        printf("記号またはendを入力してください\n");
        result3 = scanf_s("%s", str, 4);

        calc.SetNum1(firstNum);
        calc.SetNum2(secondNum);

        if (IsStrCmp(str, "end"))
        {
            endFlag = true;
            continue;
        }

        if (!(result1 && result2 && result3))
        {
            continue;
        }

        if (firstNum % 2 == 0)
        {
            ans = firstNum - secondNum;
            std::cout << "結果(引き算)\n" << ans;
        }
        if (firstNum % 2 == 1)
        {
            ans = firstNum + secondNum;
            std::cout << "結果(足し算)\n" << ans << "\n";
        }
        else if (IsStrCmp(str, "%"))
        {
            ans = calc.Sur();
            printf("%d %% %d = %d\n", firstNum, secondNum, ans);
        }
        else
        {
            printf("+,-,*,/,%%以外の記号が入力されています\n");
        }
    } while (!endFlag);

    return 0;
}
bool IsStrCmp(const char* s1, const char* s2)
{
    return strcmp(s1, s2) == 0;
}
*/

/*
第８問(10点)
以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
実行できるようにしてください。
解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
(途中確認のためにコメントアウトをする分はOKです。)
間違えている個所は4か所です。
*/

/*
回答
*/
/*
class Point
{
public:
    Point() { Clear(); }

    void Clear()
    {
       x = 0;
       y = 0;
       z = 0;
       return;
    }
public:
    int x, y, z;
};
int main()
{
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.x < nextPoint.x)
        {
            point.x++;
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
        }

        if (point.y < nextPoint.y)
        {
            point.y++;
        }
        else if (point.y > nextPoint.y)
        {
            point.y--;
        }
        printf("pointX = %d\n", point.x);
        printf("pointY = %d\n", point.y);

        if (point.x == nextPoint.x &&
            point.y == nextPoint.y)
        {
            break;
        }
    }
}
*/
/*
���������Ԃ�90���ł��B
�������ɂ킩��Ȃ�����(�֐�����include���Ȃ�)������΁A
�l�b�g��{�Œ��ׂĂ�����č\���܂���B
���̈Ӑ}�������ł��Ȃ��ꍇ�͐搶�Ɏ��₵�Ă�����č\���܂���B
���̐��k�Ɖ�b���邱�Ƃ�A�𓚂������Ă��炤���Ƃ͋֎~�ł��B

��������80�����o�߂������_�ŁAgit�ɂĒ�o���n�߂Ă��������B
����܂ł͖����������A�ʂ̍�Ƃ����Ă����܂��܂��񂪁A
��������80�������ł̒�o�͂ł��܂���B
*/
#include <iostream>
#include<stdio.h>

/*
��P��(���2�_)
�ȉ��̌v�Z��2�i���œ�����B
00101100 + 01010101
10110000 + 00001111
*/

/*
��
10000001
10111111
*/


/*
��Q��(���2�_)
��P��̓�����10�i���œ�����
*/

/*
��
129
191
*/


/*
��R��(���2�_)
char�Aint�Afloat�Adouble�̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
*/

/*
��
char 1�o�C�g
int 4�o�C�g
float 4�o�C�g
double 8�o�C�g
*/

/*
��S��(���2�_)
char* �Aint * �Afloat * �Adouble * �̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
*/

/*
��
char* 8�o�C�g
int* 8�o�C�g
float* 8�o�C�g
double* 8�o�C�g
*/

/*
��T��(20�_)
�ȉ��̃v���O���������s�����ꍇ�A
�@�`�B�̂ǂ̕��������s����邩������B
int main()
{
    int num = 5;

    num = num % 3;

    if (num == 0)
    {
        �@ 
    }
    else if (num == 2)
    {
        �A
    }
    else
    {
        �B
    }
}
*/

/*
��
�A
*/

/*
��U��(25�_)
���l��2���͂��A
1�Ԗڂɓ��͂��ꂽ�l����Ȃ瑫���Z�A
1�Ԗڂɓ��͂��ꂽ�l�������Ȃ�����Z���s���v���O�������쐬����B

����)
1 // 1�Ԗڂɓ��͂��ꂽ�l
5 // 2�Ԗڂɓ��͂��ꂽ�l
6 // 1�Ԗڂ���Ȃ̂ő����Z

4 // 1�Ԗڂɓ��͂��ꂽ�l
3 // 2�Ԗڂɓ��͂��ꂽ�l
1 // 1�Ԗڂ������Ȃ̂ň����Z
*/

/*
��

int main(void)
{
  int a;
  int b;
  int c;

  std::cout << "����2���͂��Ă�������\n"<<"��ڂ̐�������͂��Ă�������\n";
  std::cin >> a;
  std::cout << "��ڂ̐�������͂��Ă�������\n";
  std::cin >> b;
  
  if( a % 2 == 0 )
  {
      c = a - b;
      std::cout << "����(�����Z)\n" << c;
  } 
  if(a%2 ==1)
  {
    c = a + b;
    std::cout << "����(�����Z)\n" << c;
  }
  return 0;
}

*/

/*
��V��(25�_)
��U��̃v���O���������[�v�ōs���悤�ɂ��A
end�Ɠ��͂��ꂽ�ꍇ�I������悤�ɂ��Ă��������B
end�̓��͂�1�Ԗڂ̒l�̏ꏊ�ł��A2�Ԗڂ̒l�̏ꏊ�ł��A
�ʓrend�̓��͂��󂯕t����悤�ł��ǂ�ł������ł��B
�ǂ����ꂩ����end�Ɠ��͂��ďI�����Ă���ΐ����Ƃ��܂��B
*/

/*��
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
    char str[4] = {};  // {}��4�S��0�ŏ�����
    int ans = 0;
    bool endFlag = false;
    int result1, result2, result3 = -1;
    Calc calc;

    do
    {

        printf("���l1����͂��Ă�������\n");
        result1 = scanf_s("%d", &firstNum);
        printf("���l2����͂��Ă�������\n");
        result2 = scanf_s("%d", &secondNum);
        printf("�L���܂���end����͂��Ă�������\n");
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
            std::cout << "����(�����Z)\n" << ans;
        }
        if (firstNum % 2 == 1)
        {
            ans = firstNum + secondNum;
            std::cout << "����(�����Z)\n" << ans << "\n";
        }
        else if (IsStrCmp(str, "%"))
        {
            ans = calc.Sur();
            printf("%d %% %d = %d\n", firstNum, secondNum, ans);
        }
        else
        {
            printf("+,-,*,/,%%�ȊO�̋L�������͂���Ă��܂�\n");
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
��W��(10�_)
�ȉ��̃v���O�������G���[���������A�R���p�C���G���[���Ȃ���Ԃɂ��A
���s�ł���悤�ɂ��Ă��������B
�𓚂��G���[�����R�����g�A�E�g���Ď��s�ł���悤�ɂ���̂�NG�ł��B
(�r���m�F�̂��߂ɃR�����g�A�E�g�����镪��OK�ł��B)
�ԈႦ�Ă������4�����ł��B
*/

/*
��
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
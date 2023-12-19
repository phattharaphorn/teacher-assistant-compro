/* Chapter : 2 - item : 1 - การใช้งาน \n และ \t

ให้นักศึกษา เขียนโปรแกรมเพื่อแสดงผลลัพธ์ 
- จำนวนบรรทัด 1 บรรทัด
- แสดงผล Programming อยู่ด้านซ้ายของจอภาพ
- แสดงผล Computer อยู่ด้านขวาของจอภาพ
- โดยให้ใช้คำสั่ง printf ได้เพียงครั้งเดียว (ถ้าตรวจพบภายหลังจะได้ ศูนย์คะแนน)

หมายเหตุ

1. การแสดงผลแต่ละบรรทัดมี 80 ตัวอักษร
*/

#include <stdio.h>

int main()
{
	printf("%-40s","Programming");
	printf("%40s","Computer");

	return 0;
}
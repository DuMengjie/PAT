//1012. 数字分类 (20)
// 
//给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：
//
//A1 = 能被5整除的数字中所有偶数的和；
//A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
//A3 = 被5除后余2的数字的个数；
//A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
//A5 = 被5除后余4的数字中最大数字。
//输入格式：
//
//每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。
//
//输出格式：
//
//对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
//
//若其中某一类数字不存在，则在相应位置输出“N”。
//
//输入样例1：
//13 1 2 3 4 5 6 7 8 9 10 20 16 18
//输出样例1：
//30 11 2 9.7 9
//输入样例2：
//8 1 2 4 5 6 7 9 16
//输出样例2：
//N 11 2 N 9
#include<cstdio>
int main(){
	int count[5] = {0};
	int ans[5] = {0};
	int n, temp;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &temp);
		if(temp % 5 == 0){
			if(temp % 2 == 0){
				ans[0] += temp;
				count[0]++;
			}
		} else if(temp % 5 == 1) {
			if(count[1] % 2 == 0){
				ans[1] += temp;
			} else {
				ans[1] -= temp;
			}
			count[1]++;
		} else if(temp % 5 == 2) {
			count[2]++;
		} else if(temp % 5 == 3) {
			ans[3] += temp;
			count[3]++;
		} else {
			if(temp > ans[4]) {
				ans[4] = temp;
			}
			count[4]++;
		}
	}
	if(count[0] == 0) printf("N ");
	else printf("%d ", ans[0]);
	if(count[1] == 0) printf("N ");
	else printf("%d ", ans[1]);
	if(count[2] == 0) printf("N ");
	else printf("%d ", count[2]);
	if(count[3] == 0) printf("N ");
	else printf("%.1f ", (double)ans[3] / count[3]);
	if(count[4] == 0) printf("N");
	else printf("%d", ans[4]);
	return 0;
} 

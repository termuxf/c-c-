#include <stdio.h>
#include <string.h>
int main(){
	printf("这是一个ASCLL字符码转换器。\n");
	char null1;
	int null2;
	for(char a;;){
	printf("d 字符 -> 数字 , s 数字 -> 字符\n");
		scanf("%c", &a);
		if(a == 'd'){
			printf("字符 -> 数字 模式\n");
			for(;;){
			int test1;
			char test[10], test3[10] ;
			printf("请输入字符");
			scanf("%s", &test);
			test3 == test; 
			if( strcasecmp(test,"exit")==0){
				printf("退出?(y/n)\n");
				for(;;){
				char qw;
				scanf("%c", &qw);
				if(qw == 'y'){
					return 0;
				}
				else if(qw == 'n'){
					break;
				}
				}
			}
		
			else if(test3 >=':' && test3 <= '~' || test3 >= ' ' && test3 <= '/'){
				printf("%c -> %d\n", test3, test1);
			}
			else if(test3 >='0' || test3 <= '9') 
			{
				printf("你输入的不是字符!\n");
			}
			}
		}			
			printf("正在研发中...\n");
			continue;
		
		

}

return 0;
}		


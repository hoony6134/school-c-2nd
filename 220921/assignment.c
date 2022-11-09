#include <stdio.h>
int main( ){
	int drink, total=0, num, sum;
    char reorder;
	
menu:  // index 달아줌 (분기)
	printf("--------------메뉴--------------\n");
	printf("1.아메리카노\t4,300원\n2.카페라떼\t4,800원\n3.쿨라임피지오\t6,400원\n4.쌍화탕\t5,200원\n");
	printf("--------------------------------\n");
	
order: // index
	printf("번호를 입력해주세요(메뉴 다시 보기는 5): ");
	scanf("%d", &drink);
	switch(drink){
		case 1: { // 1 입력시 아래 실행
			printf("아메리카노 수량 선택: ");
			scanf("%d", &num);
			total += 4300*num;
            sum += total;
        }
		case 2: {
			printf("카페라떼 수량 선택: ");
			scanf("%d", &num);
			total += 4800*num;
			break;
		}
		case 3: {
			printf("쿨라임피지오 수량 선택: ");
			scanf("%d", &num);
			total += 6400*num;
			break;
		}
		case 4: {
			printf("쌍화탕 수량 선택: ");
			scanf("%d", &num);
			total += 5200*num;
			break;
		}
		case 5: { // 5 입력시
			goto menu; // menu 인덱스로 감
			break;
		}
		default:{ // 1~5가 아닌 다른 값일 경우 아래 실행
			printf("1~5번 중에 선택해주세요!\n");
			goto order; // 다시 실행
			break;
		}
	}
    printf("메뉴를 추가로 주문하시겠습니까? (y/n): ");
            while((reorder=getchar())!='\0'){ // null 아닌지 확인
                if(reorder!='y'&&reorder!='Y') goto order;
                break;
            }
	printf("총 %d원 입니다.\n", total);
}
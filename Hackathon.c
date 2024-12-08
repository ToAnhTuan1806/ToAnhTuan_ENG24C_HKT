#include<stdio.h>

int main(){
	int arr[100];
	int i, j, n=0;
	int choice, key, pos, value;
	int max, max_2, min, min_2;
	int start, mid, end, searchValue;
	int prime, temp;
	int index, sum;
	int check, m ,a[100];
	
	do{
		printf("\nMENU\n");
		printf("1. Nhap so luong va gia tri cho cac phan tu\n");
		printf("2. In mang (arr[0]=..., arr[1]=...)\n");
		printf("3. Dem so luong so hoan hao\n");
		printf("4. Dem so luong so nguyen to\n");
		printf("5. Tim gia tri lon thu 2 (Khong sap xep)\n");
		printf("6. Tim gia tri nho thu 2 (Khong sap xep)\n");
		printf("7. Them phan tu tai vi tri\n");
		printf("8. Xoa phan tu tai vi tri\n");
		printf("9. Sap xep mang tang dan (sap xep chen)\n");
		printf("10. Sap xep mang giam dan (sap xep chen)\n");
		printf("11. Tim kiem phan tu (Tim kiem nhi phan)\n");
		printf("12. Xoa phan tu trung lap va in phan tu doc nhat\n");
		printf("13. Sap xep va hien thi so chan dung truoc, so le dung sau\n");
		printf("14. Dao nguoc mang\n");
		printf("15. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch(choice) {
			//Nhap so luong va gia tri cho cac phan tu
			case 1:
				printf("Nhap so luong phan tu cho mang: ");
				scanf("%d", &n);
				
				for(i = 0; i < n; i++) {
					printf("Nhap phan tu arr[%d]: ", i);
					scanf("%d", &arr[i]);
				}
				break;
			//In mang (arr[0]=..., arr[1]=...)	
			case 2:
				printf("Gia tri cac phan tu trong mang:\n");
				for(i = 0; i < n; i++) {
					printf("arr[%d] = %d\n", i, arr[i]);
				}
				break; 	
			//Dem so luong so hoan hao	
			case 3:
				index = 0;
		        for(i=0;i<n;i++){
	                sum=0;
		    	    int a;
					for(a=1;a<arr[i];a++){
		    	     	if(arr[i]%a==0){
		    			    sum=sum+a;
					    }
				    }
				    if(sum==arr[i]){
						index++;
				    }
			    }
				printf("Co %d so la so hoan hao",index);
				printf(" \n");
				break;
			//Dem so luong so nguyen to	
			case 4:
				prime=0;
				for(i=0;i<n;i++){
					if(arr[i]<10){
						switch(arr[i]){
							case 2:
						    case 3:
						    case 5:
						    case 7:
						    	prime += 1;
						}
					}else if(arr[i]%2!=0&&arr[i]%3!=0&&arr[i]%5!=0&&arr[i]%7!=0){
					    prime += 1;
					}
				}
				printf("so luong so nguyen la: %d", prime);
				printf(" \n");
				
				break;
			//Tim gia tri lon thu 2 (Khong sap xep)	
			case 5:
				max=arr[0];
				for(i=0; i<n; i++) {
					if(arr[i]>max) {
						max_2=max;
						max=arr[i];
					} else if(arr[i]>max_2) {
						max_2=arr[i];
					}
				}
				printf("Gia tri lon thu 2 trong mang: %d", max_2);
				break;
			//Tim gia tri nho thu 2 (Khong sap xep)	
			case 6:
				min=arr[0];
				for(i=1; i<n; i++) {
					if(arr[i]<min) {
						min_2=min;
						min=arr[i];
					} else if(arr[i]<min_2) {
						min_2=arr[i];
					}
				}
				printf("Gia tri nho thu 2 trong mang: %d", min_2);
				break;
			//Them phan tu tai vi tri	
			case 7:
			printf("Nhap vi tri muon them: ");
                scanf("%d", &pos);
                printf("Nhap phan tu muon them: ");
                scanf("%d", &value);
                
                if(pos < 0 || pos > n) {
                    printf("Vi tri khong hop le\n");
                } else {
                    for(i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                }
                printf("Mang sau khi them phan tu: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
			//Xoa phan tu tai vi tri	
			case 8:
				printf("Nhap vi tri muon xoa: ");
                scanf("%d", &pos);
                
                if(pos < 0 || pos >= n) {
                    printf("So nhap vao khong hop le\n");
                } else {
                    for(i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                printf("Mang sau khi xoa phan tu: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
			//Sap xep mang tang dan (sap xep chen)	
			case 9:
				for(i=0; i<n; i++) {
					key=arr[i];
					j=i-1;
					while(j>=0 && arr[j]>key) {
						arr[j+1] = arr[j];
						j=j-1;
					}
					arr[j+1] = key;
				}		
				printf("Mang sap xep theo thu tu tang dan: ");
				for(i=0; i<n; i++) {
					printf("%d ", arr[i]);
				}
				printf("\n");	
				break;
			//Sap xep mang giam dan (sap xep chen)	
			case 10:
				for(i=0; i<n; i++) {
					key=arr[i];
					j=i-1;
					while(j>=0 && arr[j]<key) {
						arr[j+1] = arr[j];
						j=j-1;
					}
					arr[j+1] = key;
				}		
				printf("Mang sap xep theo thu tu giam dan: ");
				for(i=0; i<n; i++) {
					printf("%d ", arr[i]);
				}
				printf("\n");
				break;
			//Tim kiem phan tu (Tim kiem nhi phan)	
			case 11:
				printf("Nhap gia tri can tim: ");
                scanf("%d", &searchValue);
                
                start = 0;
                end = n - 1;
                while(start <= end) {
                    mid = (start + end) / 2;
                    if(arr[mid] == searchValue) {
                        printf("Vi tri phan tu can tim o vi tri %d\n", mid);
                        break;
                    } else if(arr[mid] > searchValue) {
                        end = mid - 1;
                    } else {
                        start = mid + 1;
                    }
                }
                if (start > end) {
                    printf("Khong tim thay ket qua\n");
                }
                break;
			//Xoa phan tu trung lap va in phan tu doc nhat	
			case 12:
				m = 0;
                for(i = 0; i < n; i++) {
                    check = 0;
                    for(j = 0; j < m; j++) {
                        if(arr[i] == a[j]) {
                            check = 1;
                            break;
                        }
                    }
                    if(!check) {
                        a[m++] = arr[i];
                    }
                }
                for(i = 0; i < m; i++) {
                    arr[i] = a[i];
                }
                n = m;
                printf("Mang sau khi xoa phan tu trung lap: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
			//Sap xep va hien thi so chan dung truoc, so le dung sau	
			case 13:
				for(i=0;i<n;i++){
                    for(j=0;j<n-i-1;j++){
                        if((arr[j]%2>arr[j+1]%2) || (arr[j]%2==arr[j+1]%2 && arr[j]>arr[j+1])){ 
                            temp=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep so chan truoc, so le sau: ");
                for(i=0;i<n;i++){
                    printf("%d ", arr[i]);
                }
                printf(" \n");
				break;
			//Dao nguoc mang	
			case 14:
				printf("Mang sau khi dao nguoc:\n");
				for(i=n-1; i>=0; i--) {
					printf("arr[%d] = %d\n", i, arr[i]);
				}
				break;
				
			case 15:
				printf("Thoat chuong trinh!!!");
				break;							
				
				default:
					printf("Lua chon khong hop le. Thu lai!");			
		}
	} while(choice !=15 );
	
	
	return 0;
}

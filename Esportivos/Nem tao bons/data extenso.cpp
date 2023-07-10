printf("\n> A data, escrita por extenso, eh: ");
				person.birthday[1]=person.birthday[0]/10;
				person.birthday[2]=person.birthday[0]%10;
				switch(person.birthday[1]){
					case 1:
						if(person.birthday[2]==0)
							printf("Dez");
						switch(person.birthday[2]){
							case 1:
								printf("Onze");
								break;
							case 2:
								printf("Doze");
								break;
							case 3:
								printf("Treze");
								break;
							case 4:
								printf("Quartorze");
								break;
							case 5:
								printf("Quinze");
								break;
							case 6:
								printf("Dezesseis");
								break;
							case 7:
								printf("Dezessete");
								break;
							case 8:
								printf("Dezoito");
								break;
							case 9:
								printf("Dezenove");
								break;
							}
						break;			
					case 2:
						printf("Vinte");
						break;
					case 3:
						printf("Trinta");
						break;}
				if(person.birthday[1]>1 && person.birthday[2]!=0)
					printf(" e ");
				if(person.birthday[1]>1){
					switch (person.birthday[2]){
						case 1:
							if(person.birthday[1]==0 && person.birthday[2]==1)
								printf("Primeiro");
							else
								printf("um");
							break;
						case 2:
							printf("dois");
							break;
						case 3:
							printf("tres");
							break;
						case 4:
							printf("quatro");
							break;
						case 5:  
							printf("cinco");
							break;
						case 6:  
							printf("seis");
							break;
						case 7:  
							printf("sete");
							break;
						case 8:  
							printf("oito");
							break;
						case 9:  
							printf("nove");
							break;
					}
				}
				else if(person.birthday[1]==0 && person.birthday[2]!=0){
					switch (person.birthday[2]){
						case 1:
							if(person.birthday[1]==0 && person.birthday[2]==1)
								printf("Primeiro");
							else
								printf("Um");
							break;
						case 2:
							printf("Dois");
							break;
						case 3:
							printf("Tres");
							break;
						case 4:
							printf("Quatro");
							break;
						case 5:  
							printf("Cinco");
							break;
						case 6:  
							printf("Seis");
							break;
						case 7:  
							printf("Sete");
							break;
						case 8:  
							printf("Oito");
							break;
						case 9:  
							printf("Nove");
							break;
					}
				}
				switch(person.birthday[3]){
					case 1:
						printf (" de janeiro.\n");
						break;
					case 2:
						printf(" de fevereiro.\n");
						break;
					case 3:
						printf(" de marco.\n");
						break;
					case 4:
						printf(" de abril.\n");
						break;
					case 5:
						printf(" de maio.\n");
						break;	
					case 6:
						printf(" de junho.\n");
						break;
					case 7:
						printf(" de julho.\n");
						break;
					case 8:
						printf(" de agosto.\n");
						break;
					case 9:
						printf(" de setembro.\n");
						break;
					case 10:
						printf(" de outubro.\n");
						break;
					case 11:
						printf(" de novembro.\n");
						break;
					case 12:
						printf(" de dezembro.\n");
						break;
					
				}
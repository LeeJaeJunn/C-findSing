#include <stdio.h>
#include <string.h>

// track 배열
char tracks[][80] = {"Everything sucks", "All I Want For Christmas", "Peaches",
                     "To Die For", "Rainy day"};

// 검색 문자열을 가진 노래 제목을 출력하는 함수
void find_track(char search_for[]) {
  int i;
  for (i = 0; i < 5; i++) {
    if (strstr(tracks[i], search_for))
      printf("노래 %i: '%s'\n", i, tracks[i]);
  }
}

int main() {
  char search_for[80];
  printf("검색할 노래 제목 일부: ");
  scanf("%79s", search_for);
  search_for[strlen(search_for) - 1] = '\0';
  find_track(search_for);
  return 0;
}
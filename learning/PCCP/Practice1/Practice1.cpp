#include <iostream>
#include <fstream>

//https://www.ibm.com/docs/ko/i/7.4?topic=functions-fseek-fseeko-reposition-file-position

int main()
{
	FILE* fptr = nullptr;

	// start
	// stream 을 엽니다.
	errno_t err = fopen_s(&fptr, ".practiceSave.txt", "w+");

	const char* staticString = "testString";
	fwrite( staticString, sizeof(char), 10, fptr);

	fwrite( staticString, sizeof(char), 10, fptr);

	fwrite( staticString, sizeof(char), 10, fptr);

	//원점
	//	정의
	//	SEEK_SET
	//		파일의 시작
	//	SEEK_CUR
	//		파일 포인터의 현재 위치
	//	SEEK_END
	//		파일의 끝

	fseek( fptr, 0, SEEK_SET );

	char buffer[31];
	buffer[30] = '\0';
	fread(buffer, sizeof(char), 30, fptr);

	printf_s(buffer);

	//end
	if ( nullptr != fptr )
	{
		// 열려있던 stream을 끝냅니다.
		fclose(fptr);
		fptr = nullptr;
	}
}

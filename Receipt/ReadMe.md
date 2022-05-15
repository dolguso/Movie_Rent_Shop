본 폴더는 영수증 형식의 다양화를 위한 폴더로 원하는 영수증 형식을 아래 양식에 맞추어 작성하여 .txt 파일로 저장한다.

※ 입력 양식
1. 값이 변경될 수 있는 정보는 아래와 같이 표기한다.
	- {customer_name} : 고객이름
	- {customer_rent_count} : 고객 총 대여건수
	- {customer_age} : 고객 나이
	- {customer_point} : 고객 포인트 점수 (적립 후 포인트)
	- {customer_earn_point} : 포인트 적립
	- {movie_title} : 영화제목
	- {movie_genre} : 영화장르
	- {movie_rent_start} : 대여일자
	- {movie_rent_term} : 대여기간
	- {movie_rent_fee} : 대여 별 금액
	- {movie_rent_point} : 대여 별 포인트
	- {movie_rent_whole_fee} : 총 대여 금액

2. 대여 건 별 출력을 위한 양식은 $로 시작한다.

3. 예시

{customer_name} ({customer_age}세)
총 대여 건수 : {customer_rent_count} 건

제목 / 장르 / 대여일 / 대여기간 / 대여료 / 포인트
-----------------------------------
${movie_title} / {movie_genre} / {movie_rent_start} / {movie_rent_term}일 / {movie_rent_fee}원 / {movie_rent_point} point
-----------------------------------

총 대여 금액 : {movie_rent_whole_fee} 원
적립 포인트 : {customer_earn_point} point
최종 포인트 : {customer_point} point
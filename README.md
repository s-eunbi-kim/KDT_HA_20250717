# KDT_HA_20250717

## PICT
### 다운로드
* https://github.com/microsoft/pict/releases/tag/v3.7.4

### 기본 명령
1. excel로 결과를 출력하는 경우
```
pict data.txt > result.xls
```

2. 전체 테스트 조합 만드는 경우
```
pict data.txt /o:max > result_max.xls
```

## 단위 테스트
* https://cyber-dojo.org/

----------------------

# Static Analysis
## Cppcheck
### 다운로드
* cppcheck : https://cppcheck.sourceforge.io/
* cppcheck 2.12 : https://sourceforge.net/projects/cppcheck/files/cppcheck/2.12/

### 실행 명령어
```
cppcheck  --enable=all --inconclusive --xml --xml-version=2 src 2> cppcheck.xml
```

```
"c:\Program Files\Cppcheck\cppcheck.exe"  --enable=all --inconclusive --xml --xml-version=2 src 2> cppcheck.xml
```
<img width="1857" height="706" alt="image" src="https://github.com/user-attachments/assets/7a00ee98-b689-45ae-9943-5efe28a68ca7" />


### MISRA 분석을 위한 실행 (cli에서의 실행 방법)
#### 1. MISRA_2012.txt 다운로드 및 복사 
#### 2 .설정 파일 생성 : misra.json
* 위치: C:\TestTools
* 파일 구성
```
{
    "script": "misra.py",
    "args": [
        "--rule-texts=C:\\TestTools\\Misra_2012.txt"
    ]
}
```
#### 3. 실행 명령
```
cppcheck.exe --addon="C:\TestTools\misra.json"  --xml --xml-version=2 . 2> cppcheck.xml
```

## cpd : duplicate code
### 다운로드
* CPD : https://pmd.github.io/
* https://github.com/pmd/pmd/releases/download/pmd_releases%2F6.55.0/pmd-bin-6.55.0.zip

### 실행 명령어
실행 시, 소스코드 폴더(분석 대상 폴더)의 대소문자가 동일해야 함!!
#### CSV 출력
```
"C:\TestTools\pmd-bin-6.55.0\bin\cpd.bat" --minimum-tokens 100 --files . --language cpp --format csv > result.csv
```

#### Jenkins 용
```
C:\tools\pmd\bin\cpd --minimum-tokens 100 --files ./src --language cpp --format xml > cpd.xml || exit 0
```

## cloc : loc, nloc 확인
### 다운로드
https://github.com/AlDanial/cloc

### 사용법
```
cloc.exe .\src
```

## Doxygen : 의존성 분석 도구
### 다운로드
* Doxygen : http://www.doxygen.nl/download.html
* Graphviz : https://graphviz.gitlab.io/download/

### 설정 파일
* Doxyfile
* open 방법 : Doxywizard 실행 > File 탭 > Open 클릭 > 다운로드 받은 "Doxyfile" 선택

## Lizard 순환 복잡도 분석
* 설치 시 주의사항 : CMD(명령 프롬프트)를 관리자 권한으로 실행한 후, pip install lizard 실행
### 다운로드
https://github.com/terryyin/lizard

### 실행 방법
#### CSV 출력
```
"C:\Program Files\Python312\Scripts\lizard.exe" . --csv > lizard.csv
```

* CSV 출력했을 때 각 열 정보
<img width="1091" height="412" alt="image" src="https://github.com/user-attachments/assets/6ee93189-cdf2-466c-b07d-53ecd7e2358a" />


#### Jenkins용 xml 출력
```
"C:\Program Files\Python312\Scripts\lizard.exe" . --xml > lizard.xml
```



@echo off //呼叫cmd

cls //畫面清空
echo COMPILING... //顯示 字串
g++ %1.cpp -o %1.exe -DDBG //-d賦予參數 DBG

echo FINISH //顯示 字串
if %ERRORLEVEL% EQU 0 (  //如果沒錯誤
	%1.exe
)
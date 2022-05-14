program HelloWorld;
const a=30;
var result_int,b,c:integer;
result_bool,d,e:boolean;
result_real,f,g:real;
s:array [-5..10,-5..90] of integer;
s_1:array [-5..90] of integer;

function testfun(n:integer):integer;
begin
    if n>2 then testfun:=testfun(n-1)+testfun(n-2)
    else testfun:=1;
end;

begin
    b:=6;
    c:=3;
    d:=true;
    e:=false;
    f:=6.5;
    g:=3.0;
    {result_int:=b-c;}
    result_bool:= -e;
    {result_real:=f-g;
    writeln(result_int);
    writeln(result_real);}
    {s_1[testfun(c)]:=c;
    writeln(s_1[testfun(c)]);}
end.
program HelloWorld;
const a=30;
var b,c:integer;
s:array [-5..10,-5..90] of integer;
s_1:array [-5..90] of integer;

function testfun(n:integer):integer;
begin
    if n>2 then testfun:=testfun(n-1)+testfun(n-2)
    else testfun:=1;
end;

begin
    {for c:=1 to 10 do d:=1;}
    b:=-1;
    c:=5;
    c:=b+c;
    s_1[testfun(c)]:=c;
    {s[-1,3]:=testfun(((c*b)/2));}
    {s[b,c]:=114514;}
    writeln(s_1[testfun(c)]);
    {s[3,4]:=3;}
    {writeln(s[3,4]);}
    {s[b,c]:=3;}
    {writeln(s[3,4]);}
    {writeln(s[8,-3]);}
    {c:=20;
    if c>5 then writeln(88);
    writeln(66);
    b:=1;
    s[2,-3]:=b;
    c:=s[2,-3];
    writeln(114514);
    REPEAT writeln(114514); UNTIL b<2;
    WHILE TRUE DO writeln(114514);
    writeln(114514);}
end.
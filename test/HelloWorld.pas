program HelloWorld;
const a=30;
const b=20;
var c,b:integer;
s:array [1..10,-5..90] of integer;

function testfun(n:integer):integer;
begin
    if n>2 then testfun:=testfun(n-1)+testfun(n-2)
    else testfun:=1;
end;
begin
    for c:=1 to 10 do d:=1;
    s[8,-3]:=testfun(10);
    writeln(s[2,-3]);
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
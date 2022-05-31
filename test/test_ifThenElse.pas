program test_ifThenElse;
var b:integer;
function testfun(n:integer):integer;
begin
    if n>2 then testfun:=testfun(n-1)+testfun(n-2)
    else testfun:=1;
end;
begin
    b:=10;
    b:=testfun(b);
    writeln(b);
end.
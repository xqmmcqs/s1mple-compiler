Program test_while;

Var 
  a: integer;
Begin
  a := 10;
  While  a < 20  Do
    Begin
      writeln(a);
      a := a + 5;
    End;
End.

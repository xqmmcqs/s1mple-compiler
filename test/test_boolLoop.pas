Program test_boolLoop;

Var c,b: integer;
Begin
  c := 1;
  b := 1;
  Repeat
    c := c+1;
    b := b*2;
    writeln(114451);
  Until TRUE;
  While FALSE Do
    writeln(114415);
  writeln(b);
End.

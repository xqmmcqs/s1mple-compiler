Program test_varDec;

Type m = integer;

Const 
  c0 = '123';
  c1 = 1.12345;
  c2 = 3;
  c3 = -c2;

Var 
  n: integer;
  a: array[-1..4, -1..4] Of integer;
  r: real;
  s: char;
  b: boolean;

Var Book1, Book2: Record
  title: array [1..50] Of char;
  author: array [1..50] Of char;
  subject: array [1..100] Of char;
  book_id: integer;
End;
Begin

End.

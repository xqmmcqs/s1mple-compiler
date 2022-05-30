; ModuleID = './test/test_repeat.bc'
source_filename = "./test/test_repeat.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@c = global i32 undef
@b = global i32 undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  store i32 1, i32* @c, align 4
  store i32 1, i32* @b, align 4
  br label %while_body

while_count:                                      ; preds = %while_body
  %0 = load i32, i32* @c, align 4
  %1 = icmp sgt i32 %0, 5
  br i1 %1, label %while_end, label %while_body

while_body:                                       ; preds = %while_count, %entry
  %2 = load i32, i32* @c, align 4
  %3 = add i32 %2, 1
  store i32 %3, i32* @c, align 4
  %4 = load i32, i32* @b, align 4
  %5 = mul i32 %4, 2
  store i32 %5, i32* @b, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 114451)
  br label %while_count

while_end:                                        ; preds = %while_count
  %6 = load i32, i32* @b, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 %6)
  ret void
}

declare void @printf(i8* noalias, ...)

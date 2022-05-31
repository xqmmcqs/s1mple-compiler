; ModuleID = './test/test_boolLoop.bc'
source_filename = "./test/test_boolLoop.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@c = global i32 undef
@b = global i32 undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  store i32 1, i32* @c, align 4
  store i32 1, i32* @b, align 4
  br label %while_body

while_count:                                      ; preds = %while_body
  br i1 true, label %while_end, label %while_body

while_body:                                       ; preds = %while_count, %entry
  %0 = load i32, i32* @c, align 4
  %1 = add i32 %0, 1
  store i32 %1, i32* @c, align 4
  %2 = load i32, i32* @b, align 4
  %3 = mul i32 %2, 2
  store i32 %3, i32* @b, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 114451)
  br label %while_count

while_end:                                        ; preds = %while_count
  br label %while_count1

while_count1:                                     ; preds = %while_body2, %while_end
  br i1 false, label %while_body2, label %while_end3

while_body2:                                      ; preds = %while_count1
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 114415)
  br label %while_count1

while_end3:                                       ; preds = %while_count1
  %4 = load i32, i32* @b, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @2, i32 0, i32 0), i32 %4)
  ret void
}

declare void @printf(i8* noalias, ...)

; ModuleID = './test/test_infiLoop.bc'
source_filename = "./test/test_infiLoop.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@c = global i32 undef
@b = global i32 undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  br label %while_count

while_count:                                      ; preds = %while_body, %entry
  br i1 true, label %while_body, label %while_end

while_body:                                       ; preds = %while_count
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 114415)
  br label %while_count

while_end:                                        ; preds = %while_count
  %0 = load i32, i32* @b, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 %0)
  ret void
}

declare void @printf(i8* noalias, ...)

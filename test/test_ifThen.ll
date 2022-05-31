; ModuleID = './test/test_ifThen.bc'
source_filename = "./test/test_ifThen.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@a = global i32 undef
@b = global float undef
@c = global i1 undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  store i32 1, i32* @a, align 4
  store float 1.500000e+00, float* @b, align 4
  store i1 true, i1* @c, align 1
  %0 = load i1, i1* @c, align 1
  br i1 %0, label %then, label %if_end

then:                                             ; preds = %entry
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 111)
  br label %if_end

if_end:                                           ; preds = %then, %entry
  %1 = load i32, i32* @a, align 4
  %2 = load float, float* @b, align 4
  %3 = sitofp i32 %1 to float
  %4 = fcmp ugt float %3, %2
  br i1 %4, label %then1, label %if_end2

then1:                                            ; preds = %if_end
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 222)
  br label %if_end2

if_end2:                                          ; preds = %then1, %if_end
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @2, i32 0, i32 0), i32 333)
  ret void
}

declare void @printf(i8* noalias, ...)

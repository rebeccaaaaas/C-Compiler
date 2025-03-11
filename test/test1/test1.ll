; ModuleID = 'main'
source_filename = "main"

@0 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@_Const_String_ = private constant [16 x i8] c"It is positive.\00"
@.str = constant [4 x i8] c"%s\0A\00"
@_Const_String_.1 = private constant [12 x i8] c"It is zero.\00"
@.str.2 = constant [4 x i8] c"%s\0A\00"
@_Const_String_.3 = private constant [16 x i8] c"It is negative.\00"
@.str.4 = constant [4 x i8] c"%s\0A\00"

declare i32 @printf(i8*, ...)

declare i32 @scanf(...)

define i32 @main() {
entrypoint:
  %a = alloca i32, align 4
  %scanf = call i32 (...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i32 0, i32 0), i32* %a)
  %tmpvar = load i32, i32* %a, align 4
  %icmptmp = icmp sgt i32 %tmpvar, 0
  %ifCond = icmp ne i1 %icmptmp, false
  br i1 %ifCond, label %then, label %else

then:                                             ; preds = %entrypoint
  %printf = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @_Const_String_, i32 0, i32 0))
  br label %merge

else:                                             ; preds = %entrypoint
  %tmpvar1 = load i32, i32* %a, align 4
  %icmptmp2 = icmp eq i32 %tmpvar1, 0
  %ifCond3 = icmp ne i1 %icmptmp2, false
  br i1 %ifCond3, label %then4, label %else5

merge:                                            ; preds = %merge6, %then
  ret i32 0

then4:                                            ; preds = %else
  %printf7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.2, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @_Const_String_.1, i32 0, i32 0))
  br label %merge6

else5:                                            ; preds = %else
  %printf8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.4, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @_Const_String_.3, i32 0, i32 0))
  br label %merge6

merge6:                                           ; preds = %else5, %then4
  br label %merge
}

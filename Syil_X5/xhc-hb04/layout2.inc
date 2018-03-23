[XHC_HB04_BUTTONS]
# use button names according to layout file LIB:xhc-hb04-layout{n}.cfg
# note: "start-pause" is connected for standard behavior
#        controlling halui.pause/halui.resume/halui.run
# these are examples, edit as required:

goto-zero   = ""
# synthesized per-axis buttons for goto-zero button:
goto-zero-x = halui.mdi-command-08
goto-zero-y = halui.mdi-command-09
goto-zero-z = ""
goto-zero-a = halui.mdi-command-10

start-pause = std_start_pause
rewind      = halui.program.step
# probe-input for simulating a probe:
# probe-z     = motion.probe-input
probe-z     = ""

half        = halui.spindle.stop
# synthesized per-axis buttons for half button:
half-x      = halui.mdi-command-16
half-y      = halui.mdi-command-17
half-z      = halui.mdi-command-18
half-a      = halui.mdi-command-19

zero        = ""
# synthesized per-axis buttons for zero button:
zero-x      = halui.mdi-command-12
zero-y      = halui.mdi-command-13
zero-z      = halui.mdi-command-14
zero-a      = halui.mdi-command-15

safe-z      = halui.mdi-command-11
# in this sim, home-all only works first time, hold down till finished:
home        = halui.home-all
macro-1     = halui.mdi-command-01
macro-2     = halui.mdi-command-02
macro-3     = halui.mdi-command-03
spindle     = halui.spindle.start
step        = xhc-hb04.stepsize-down
mode        = halui.mode.manual
macro-6     = halui.mdi-command-06
macro-7     = halui.mdi-command-07
stop        = halui.program.stop
reset       = halui.estop.activate

[HALUI]
# these are examples, edit as required:
# a halui hal pin is created for each MDI_COMMAND below
# halui.mdi-command-00, halui.mdi-command-01,... etc
#00
MDI_COMMAND=G0 X0
#01
MDI_COMMAND=G0 Y0
#02
MDI_COMMAND=G0 A0
#03 M110: clears notifications
MDI_COMMAND=M110
MDI_COMMAND=(debug, example: mdi-04)
MDI_COMMAND=(debug, example: mdi-05)
MDI_COMMAND=(debug, example: mdi-06)
#07 M101: example print to stdout
MDI_COMMAND=M101
MDI_COMMAND=G0 X0
MDI_COMMAND=G0 Y0
MDI_COMMAND=G0 Z0
#11
MDI_COMMAND= G0 G53 Z236
#12
MDI_COMMAND= G10 L20 P0 X0
#13
MDI_COMMAND= G10 L20 P0 Y0
#14
MDI_COMMAND= G10 L20 P0 Z0
#15
MDI_COMMAND= G10 L20 P0 A0
#16
MDI_COMMAND= G10 L20 P0 X[#5420/2]
#17
MDI_COMMAND= G10 L20 P0 Y[#5421/2]
#18
MDI_COMMAND= G10 L20 P0 Z[#5422/2]
#19
MDI_COMMAND= G10 L20 P0 A[#5423/2]

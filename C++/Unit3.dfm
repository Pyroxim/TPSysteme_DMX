object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 55
    Width = 5
    Height = 19
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 24
    Top = 24
    Width = 75
    Height = 25
    Caption = 'Initialisation'
    TabOrder = 0
    OnClick = Button1Click
  end
  object TrackBar1: TTrackBar
    Left = 144
    Top = 24
    Width = 45
    Height = 153
    HelpType = htKeyword
    Ctl3D = True
    Max = 255
    Orientation = trVertical
    ParentCtl3D = False
    ParentShowHint = False
    PositionToolTip = ptBottom
    ShowHint = False
    TabOrder = 1
    Visible = False
    OnChange = TrackBar1Change
  end
  object TrackBar2: TTrackBar
    Left = 216
    Top = 24
    Width = 45
    Height = 153
    HelpType = htKeyword
    Ctl3D = True
    Max = 255
    Orientation = trVertical
    ParentCtl3D = False
    ParentShowHint = False
    PositionToolTip = ptBottom
    ShowHint = False
    TabOrder = 2
    Visible = False
    OnChange = TrackBar2Change
  end
  object TrackBar3: TTrackBar
    Left = 288
    Top = 24
    Width = 45
    Height = 153
    HelpType = htKeyword
    Ctl3D = True
    Max = 255
    Orientation = trVertical
    ParentCtl3D = False
    ParentShowHint = False
    PositionToolTip = ptBottom
    ShowHint = False
    TabOrder = 3
    Visible = False
    OnChange = TrackBar3Change
  end
  object TrackBar4: TTrackBar
    Left = 360
    Top = 24
    Width = 45
    Height = 153
    HelpType = htKeyword
    Ctl3D = True
    Max = 255
    Orientation = trVertical
    ParentCtl3D = False
    ParentShowHint = False
    PositionToolTip = ptBottom
    ShowHint = False
    TabOrder = 4
    Visible = False
    OnChange = TrackBar4Change
  end
  object TrackBar5: TTrackBar
    Left = 432
    Top = 24
    Width = 45
    Height = 153
    HelpType = htKeyword
    Ctl3D = True
    Max = 255
    Orientation = trVertical
    ParentCtl3D = False
    ParentShowHint = False
    PositionToolTip = ptBottom
    ShowHint = False
    TabOrder = 5
    Visible = False
    OnChange = TrackBar5Change
  end
  object TrackBar6: TTrackBar
    Left = 504
    Top = 24
    Width = 45
    Height = 153
    HelpType = htKeyword
    Ctl3D = True
    Max = 255
    Orientation = trVertical
    ParentCtl3D = False
    ParentShowHint = False
    PositionToolTip = ptBottom
    ShowHint = False
    TabOrder = 6
    Visible = False
    OnChange = TrackBar6Change
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 608
  end
end

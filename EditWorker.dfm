object Form5: TForm5
  Left = 0
  Top = 0
  Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077' '#1088#1072#1073#1086#1090#1085#1080#1082#1086#1074
  ClientHeight = 574
  ClientWidth = 727
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 336
    Top = 280
    Width = 45
    Height = 28
    Caption = #1060#1048#1054
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 296
    Top = 374
    Width = 103
    Height = 28
    Caption = #1044#1086#1083#1078#1085#1086#1089#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 248
    Top = 8
    Width = 192
    Height = 28
    Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1088#1072#1073#1086#1090#1085#1080#1082#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object EditName: TEdit
    Left = 31
    Top = 332
    Width = 625
    Height = 36
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object EditPosition: TEdit
    Left = 31
    Top = 424
    Width = 625
    Height = 36
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object ButtonAdd: TButton
    Left = 296
    Top = 488
    Width = 123
    Height = 49
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = ButtonAddClick
  end
  object ListBoxWorkers: TListBox
    Left = 23
    Top = 56
    Width = 674
    Height = 209
    ItemHeight = 15
    TabOrder = 3
  end
  object ADOQuery: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM '#1056#1072#1073#1086#1090#1085#1080#1082#1080';')
    Left = 158
    Top = 528
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=D:\AI' +
      'DARBEK.mdb;Mode=ReadWrite;'
    LoginPrompt = False
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 78
    Top = 536
  end
end

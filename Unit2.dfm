object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 677
  ClientWidth = 1037
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 1037
    Height = 677
    ActivePage = TabSheet1
    Align = alClient
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = #1050#1083#1080#1077#1085#1090#1099
      object DBGrid4: TDBGrid
        Left = 0
        Top = 3
        Width = 1094
        Height = 646
        DataSource = DataSource1
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -12
        TitleFont.Name = 'Segoe UI'
        TitleFont.Style = []
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1056#1072#1073#1086#1090#1085#1080#1082#1080
      ImageIndex = 1
      object DBGrid3: TDBGrid
        Left = 0
        Top = 0
        Width = 1029
        Height = 647
        Align = alClient
        DataSource = DataSource2
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -12
        TitleFont.Name = 'Segoe UI'
        TitleFont.Style = []
      end
    end
    object TabSheet3: TTabSheet
      Caption = #1055#1088#1086#1076#1072#1078#1080
      ImageIndex = 2
      object DBGrid2: TDBGrid
        Left = 0
        Top = 0
        Width = 1029
        Height = 647
        Align = alClient
        DataSource = DataSource3
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -12
        TitleFont.Name = 'Segoe UI'
        TitleFont.Style = []
      end
    end
    object TabSheet4: TTabSheet
      Caption = #1040#1074#1090#1086#1079#1072#1087#1095#1072#1089#1090#1080
      ImageIndex = 3
      object DBGrid1: TDBGrid
        Left = 0
        Top = 0
        Width = 1029
        Height = 647
        Align = alClient
        DataSource = DataSource4
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -12
        TitleFont.Name = 'Segoe UI'
        TitleFont.Style = []
      end
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\AIDARBEK.mdb;Per' +
      'sist Security Info=False'
    LoginPrompt = False
    Mode = cmRead
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 288
    Top = 592
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM '#1050#1083#1080#1077#1085#1090#1099';')
    Left = 692
    Top = 466
  end
  object ADOQuery2: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM '#1056#1072#1073#1086#1090#1085#1080#1082#1080';')
    Left = 788
    Top = 466
  end
  object ADOQuery3: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM '#1055#1088#1086#1076#1072#1078#1080';')
    Left = 876
    Top = 466
  end
  object ADOQuery4: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM '#1040#1074#1090#1086#1079#1072#1087#1095#1072#1089#1090#1080';')
    Left = 964
    Top = 466
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 692
    Top = 394
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 780
    Top = 394
  end
  object DataSource3: TDataSource
    DataSet = ADOQuery3
    Left = 876
    Top = 394
  end
  object DataSource4: TDataSource
    DataSet = ADOQuery4
    Left = 972
    Top = 394
  end
end

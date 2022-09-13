#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_NSIS = {{
//++Autogenerated -- start of section automatically generated
"Function FunctionEnd Goto Page PageEx PageExEnd Return Section SectionEnd SectionGroup SectionGroupEnd UninstPage Var "

, // 1 preprocessor
"addincludedir addplugindir appendfile assert cd define delfile echo else endif error execute finalize "
"getdllversion gettlbversion if ifdef ifmacrodef ifmacrondef ifndef include insertmacro "
"macro macroend macroundef makensis packhdr pragma searchparse searchreplace system tempfile undef uninstfinalize "
"verbose warning "

, // 2 instruction
"Abort AddSize BringToFront Call CallInstDLL ClearErrors CopyFiles CreateDirectory CreateFont CreateShortcut "
"Delete DeleteINISec DeleteINIStr DeleteRegKey DeleteRegValue DetailPrint "
"EnableWindow EnumRegKey EnumRegValue Exch Exec ExecShell ExecShellWait ExecWait ExpandEnvStrings "
"File FileClose FileOpen FileRead FileReadByte FileReadUTF16LE FileReadWord FileSeek "
"FileWrite FileWriteByte FileWriteUTF16LE FileWriteWord FindClose FindFirst FindNext FindWindow FlushINI "
"GetCurInstType GetCurrentAddress GetDLLVersion GetDLLVersionLocal GetDlgItem GetErrorLevel "
"GetFileTime GetFileTimeLocal GetFullPathName GetFunctionAddress GetInstDirError GetKnownFolderPath GetLabelAddress "
"GetTempFileName GetWinVer "
"HideWindow "
"IfAbort IfErrors IfFileExists IfRebootFlag IfRtlLanguage IfShellVarContextAll IfSilent InitPluginsDir "
"InstType InstTypeGetText InstTypeSetText "
"Int64Cmp Int64CmpU Int64Fmt IntCmp IntCmpU IntFmt IntOp IntPtrCmp IntPtrCmpU IntPtrOp IsWindow "
"LangString LicenseLangString LoadAndSetImage LoadLanguageFile LockWindow LogSet LogText MessageBox Nop "
"PageCallbacks Pop Push Quit RMDir ReadEnvStr ReadINIStr ReadRegDWORD ReadRegStr Reboot RegDLL Rename ReserveFile "
"SearchPath SectionGetFlags SectionGetInstTypes SectionGetSize SectionGetText SectionIn SectionInstType "
"SectionSetFlags SectionSetInstTypes SectionSetSize SectionSetText SendMessage SetAutoClose SetBrandingImage "
"SetCtlColors SetCurInstType SetDetailsPrint SetDetailsView SetErrorLevel SetErrors SetFileAttributes SetOutPath "
"SetRebootFlag SetRegView SetShellVarContext SetSilent ShowWindow Sleep StrCmp StrCmpS StrCpy StrLen "
"UnRegDLL "
"WriteINIStr WriteRegBin WriteRegDWORD WriteRegExpandStr WriteRegMultiStr WriteRegNone WriteRegStr WriteUninstaller "

, // 3 attribute
"AddBrandingImage AllowRootDirInstall AllowSkipFiles AutoCloseWindow BGFont BGGradient BrandingText "
"CRCCheck Caption ChangeUI CheckBitmap CompletedText ComponentText DetailsButtonText DirText DirVar DirVerify "
"FileBufSize FileErrorText Icon InstProgressFlags InstallButtonText InstallColors InstallDir InstallDirRegKey "
"LicenseBkColor LicenseData LicenseForceSelection LicenseText "
"ManifestDPIAware ManifestLongPathAware ManifestSupportedOS MiscButtonText Name OutFile PEAddResource PERemoveResource "
"RequestExecutionLevel "
"SetCompress SetCompressor SetCompressorDictSize SetDatablockOptimize SetDateSave SetFont SetOverwrite "
"ShowInstDetails ShowUninstDetails SilentInstall SilentUnInstall SpaceTexts SubCaption "
"Unicode UninstallButtonText UninstallCaption UninstallIcon UninstallSubCaption UninstallText "
"VIAddVersionKey VIFileVersion VIProductVersion WindowIcon XPStyle "

, // 4 function
"BannerTrimPath ConfigRead ConfigReadS ConfigWrite ConfigWriteS DirState DriveSpace FileJoin FileReadFromEnd FileRecode "
"GetBaseName GetDrives GetExeName GetExePath GetFileAttributes GetFileExt GetFileName GetFileVersion "
"GetOptions GetOptionsS GetParameters GetParent GetRoot GetSize GetTime "
"LineFind LineRead LineSum Locate RefreshShellIcons StrFilter StrFilterS TextCompare TextCompareS TrimNewLines "
"VersionCompare VersionConvert "
"WordAdd WordAddS WordFind WordFind2X WordFind2XS WordFind3X WordFind3XS WordFindS WordInsert WordInsertS "
"WordReplace WordReplaceS "
"onGUIEnd onGUIInit onInit onInstFailed onInstSuccess onMouseOverSection onRebootFailed onSelChange "
"onUninstFailed onUninstSuccess onUserAbort onVerifyInstDir "

, // 5 predefined variables
"$ADMINTOOLS $APPDATA $CDBURN_AREA $COOKIES $DESKTOP $DOCUMENTS $EXEDIR $EXEFILE $EXEPATH $FAVORITES $FONTS "
"$HISTORY $HWNDPARENT $INTERNET_CACHE $LOCALAPPDATA $MUSIC $NETHOOD "
"$PICTURES $PLUGINSDIR $PRINTHOOD $PROFILE $PROGRAMFILES $PROGRAMFILES32 $PROGRAMFILES64 $QUICKLAUNCH "
"$RECENT $RESOURCES $RESOURCES_LOCALIZED $SENDTO $SMPROGRAMS $SMSTARTUP $STARTMENU $SYSDIR $TEMP $TEMPLATES $VIDEOS "
"$WINDIR ${NSISDIR} ${NSIS_CHAR_SIZE} ${NSIS_PACKEDVERSION} ${NSIS_PTR_SIZE} ${NSIS_VERSION} "
"${__COUNTER__} ${__DATE__} ${__FILEDIR__} ${__FILE__} ${__LINE__} ${__TIMESTAMP__} ${__TIME__} "

, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_NSIS[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_NSIS_WORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ SCE_NSIS_PREPROCESSOR, NP2StyleX_Preprocessor, L"fore:#FF8000" },
	{ SCE_NSIS_INSTRUCTION, NP2StyleX_Instruction, L"fore:#0080FF" },
	{ MULTI_STYLE(SCE_NSIS_COMMENT, SCE_NSIS_COMMENTLINE, 0, 0), NP2StyleX_Comment, L"fore:#008000" },
	{ MULTI_STYLE(SCE_NSIS_STRINGDQ, SCE_NSIS_STRINGSQ, SCE_NSIS_STRINGBT, 0), NP2StyleX_String, L"fore:#008080" },
	{ SCE_NSIS_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_NSIS_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ MULTI_STYLE(SCE_NSIS_VARIABLE, SCE_NSIS_VARIABLE_BRACE, SCE_NSIS_VARIABLE_PAREN, 0), NP2StyleX_Variable, L"fore:#9E4D2A" },
	{ SCE_NSIS_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
	{ SCE_NSIS_LABEL, NP2StyleX_Label, L"back:#FFC040" },
};

EDITLEXER lexNsis = {
	SCLEX_NSIS, NP2LEX_NSIS,
//Settings++Autogenerated -- start of section automatically generated
	{
		LexerAttr_Default,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // section, function
		0,
		'\\', SCE_NSIS_ESCAPECHAR, 0,
		0,
		0, 0,
		SCE_NSIS_OPERATOR, 0
		, KeywordAttr32(0, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_NoLexer) // preprocessor
		| KeywordAttr32(2, KeywordAttr_NoLexer) // instruction
		| KeywordAttr32(3, KeywordAttr_NoLexer) // attribute
		| KeywordAttr32(4, KeywordAttr_NoLexer) // function
		| KeywordAttr32(5, KeywordAttr_NoLexer) // predefined variables
	},
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Nsis Setup Script", Styles_NSIS),
	L"nsi; nsh; nlf",
	&Keywords_NSIS,
	Styles_NSIS
};

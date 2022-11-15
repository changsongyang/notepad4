#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_PHP = {{
//++Autogenerated -- start of section automatically generated
"__halt_compiler( abstract and array( as break case catch class clone const continue declare( default die( do "
"echo else elseif empty( enddeclare endfor endforeach endif endswitch endwhile enum eval( exit( extends "
"false final finally fn for foreach from function global goto "
"if implements include include_once instanceof insteadof interface isset( list( match namespace new null or "
"print private protected public readonly require require_once return static switch throw trait true try unset( use var "
"while xor yield "

, // 1 type
"array bool boolean callable double float int integer iterable mixed never numeric object parent real resource "
"self string unset void "

, // 2 class
"__PHP_Incomplete_Class AppendIterator ArgumentCountError ArithmeticError ArrayIterator ArrayObject AssertionError "
"BadFunctionCallException BadMethodCallException "
"CachingIterator CallbackFilterIterator Closure CompileError "
"CURLFile CurlHandle CurlMultiHandle CurlShareHandle CURLStringFile "
"DateInterval DatePeriod DateTime DateTimeImmutable DateTimeZone Directory DirectoryIterator DivisionByZeroError "
"DomainException "
"EmptyIterator Error ErrorException Exception Fiber FiberError FilesystemIterator FilterIterator "
"Generator GlobIterator GMP HashContext InfiniteIterator InvalidArgumentException IteratorIterator JsonException "
"LengthException LimitIterator LogicException "
"MultipleIterator mysqli mysqli_driver mysqli_result mysqli_sql_exception mysqli_stmt mysqli_warning NoRewindIterator "
"OutOfBoundsException OutOfRangeException OverflowException "
"ParentIterator ParseError PDO PDOException PDOStatement php_user_filter "
"RangeException RecursiveArrayIterator RecursiveCachingIterator RecursiveCallbackFilterIterator "
"RecursiveDirectoryIterator RecursiveFilterIterator RecursiveIteratorIterator RecursiveRegexIterator "
"RecursiveTreeIterator Reflection ReflectionAttribute ReflectionClass ReflectionClassConstant "
"ReflectionEnum ReflectionEnumBackedCase ReflectionEnumUnitCase ReflectionException ReflectionExtension "
"ReflectionFiber ReflectionFunction ReflectionFunctionAbstract ReflectionGenerator ReflectionIntersectionType "
"ReflectionMethod ReflectionNamedType ReflectionObject ReflectionParameter ReflectionProperty ReflectionReference "
"ReflectionType ReflectionUnionType ReflectionZendExtension RegexIterator RuntimeException "
"SessionHandler SimpleXMLElement SimpleXMLIterator SplDoublyLinkedList SplFileInfo SplFileObject SplFixedArray SplHeap "
"SplMaxHeap SplMinHeap SplObjectStorage SplPriorityQueue SplQueue SplStack SplTempFileObject "
"SQLite3 SQLite3Result SQLite3Stmt stdClass "
"TypeError UnderflowException UnexpectedValueException UnhandledMatchError ValueError WeakMap WeakReference "

, // 3 interface
"ArrayAccess BackedEnum Countable DateTimeInterface Iterator IteratorAggregate JsonSerializable OuterIterator "
"RecursiveIterator Reflector "
"SeekableIterator Serializable SessionHandlerInterface SessionIdInterface SessionUpdateTimestampHandlerInterface "
"SplObserver SplSubject Stringable "
"Throwable Traversable UnitEnum "

, // 4 predefined variable
"$GLOBALS $_COOKIE $_ENV $_FILES $_GET $_POST $_REQUEST $_SERVER $_SESSION $argc $argv $http_response_header $this "

, // 5 magic constant
"__CLASS__ __COMPILER_HALT_OFFSET__ __DIR__ __FILE__ __FUNCTION__ __LINE__ __METHOD__ __NAMESPACE__ __TRAIT__ "

, // 6 magic method
"__call( __callStatic( __clone( __construct( __debugInfo( __destruct( __get( __invoke( __isset( "
"__serialize( __set( __set_state( __sleep( __toString( __unserialize( __unset( __wakeup( "

, // 7 constant
"AFRICA ALL ALL_MATCHES ALL_WITH_BC AMERICA ANTARCTICA ARCTIC ARRAY_AS_PROPS ARRAY_FILTER_USE_BOTH ARRAY_FILTER_USE_KEY "
"ASIA ASSERT_ACTIVE ASSERT_BAIL ASSERT_CALLBACK ASSERT_QUIET_EVAL ASSERT_WARNING ATLANTIC ATOM ATTR_AUTOCOMMIT "
"ATTR_CASE ATTR_CLIENT_VERSION ATTR_CONNECTION_STATUS ATTR_CURSOR ATTR_CURSOR_NAME "
"ATTR_DEFAULT_FETCH_MODE ATTR_DEFAULT_STR_PARAM ATTR_DRIVER_NAME ATTR_EMULATE_PREPARES ATTR_ERRMODE "
"ATTR_FETCH_CATALOG_NAMES ATTR_FETCH_TABLE_NAMES ATTR_MAX_COLUMN_LEN ATTR_ORACLE_NULLS ATTR_PERSISTENT ATTR_PREFETCH "
"ATTR_SERVER_INFO ATTR_SERVER_VERSION ATTR_STATEMENT_CLASS ATTR_STRINGIFY_FETCHES ATTR_TIMEOUT AUSTRALIA "
"BYPASS_CURRENT BYPASS_KEY "
"CALL_TOSTRING CASE_LOWER CASE_NATURAL CASE_UPPER CATCH_GET_CHILD CHAR_MAX CHILD_ARRAYS_ONLY CHILD_FIRST "
"CONNECTION_ABORTED CONNECTION_NORMAL CONNECTION_TIMEOUT COOKIE COUNT_NORMAL COUNT_RECURSIVE "
"CREDITS_ALL CREDITS_DOCS CREDITS_FULLPAGE CREDITS_GENERAL CREDITS_GROUP CREDITS_MODULES CREDITS_QA CREDITS_SAPI "
"CRYPT_BLOWFISH CRYPT_EXT_DES CRYPT_MD5 CRYPT_SALT_LENGTH CRYPT_SHA256 CRYPT_SHA512 CRYPT_STD_DES "
"CURRENT_AS_FILEINFO CURRENT_AS_PATHNAME CURRENT_AS_SELF CURRENT_MODE_MASK CURSOR_FWDONLY CURSOR_SCROLL "
"DEBUG_BACKTRACE_IGNORE_ARGS DEBUG_BACKTRACE_PROVIDE_OBJECT DEFAULT_INCLUDE_PATH DIRECTORY_SEPARATOR "
"DNS_A DNS_AAAA DNS_ALL DNS_ANY DNS_CAA DNS_CNAME DNS_HINFO DNS_MX DNS_NS DNS_PTR DNS_SOA DNS_TXT DROP_NEW_LINE "
"ENT_COMPAT ENT_DISALLOWED ENT_HTML401 ENT_HTML5 ENT_IGNORE ENT_NOQUOTES ENT_QUOTES ENT_SUBSTITUTE ENT_XHTML ENT_XML1 "
"ERRMODE_EXCEPTION ERRMODE_SILENT ERRMODE_WARNING ERR_NONE EUROPE EXCLUDE_START_DATE EXTR_IF_EXISTS EXTR_OVERWRITE "
"EXTR_PREFIX_ALL EXTR_PREFIX_IF_EXISTS EXTR_PREFIX_INVALID EXTR_PREFIX_SAME EXTR_REFS EXTR_SKIP E_ALL "
"E_COMPILE_ERROR E_COMPILE_WARNING E_CORE_ERROR E_CORE_WARNING E_DEPRECATED E_ERROR E_NOTICE E_PARSE E_RECOVERABLE_ERROR "
"E_STRICT E_USER_DEPRECATED E_USER_ERROR E_USER_NOTICE E_USER_WARNING E_WARNING "
"FETCH_ASSOC FETCH_BOTH FETCH_BOUND FETCH_CLASS FETCH_CLASSTYPE FETCH_COLUMN FETCH_DEFAULT FETCH_FUNC FETCH_GROUP "
"FETCH_INTO FETCH_KEY_PAIR FETCH_LAZY FETCH_NAMED FETCH_NUM "
"FETCH_OBJ FETCH_ORI_ABS FETCH_ORI_FIRST FETCH_ORI_LAST FETCH_ORI_NEXT FETCH_ORI_PRIOR FETCH_ORI_REL FETCH_PROPS_LATE "
"FETCH_SERIALIZE FETCH_UNIQUE FILE_APPEND FILE_BINARY FILE_IGNORE_NEW_LINES FILE_NO_DEFAULT_CONTEXT "
"FILE_SKIP_EMPTY_LINES FILE_TEXT FILE_USE_INCLUDE_PATH FNM_CASEFOLD FNM_NOESCAPE FNM_PATHNAME FNM_PERIOD FOLLOW_SYMLINKS "
"FULL_CACHE "
"GET_MATCH GLOB_AVAILABLE_FLAGS GLOB_BRACE GLOB_MARK GLOB_NOCHECK GLOB_NOESCAPE GLOB_NOSORT GLOB_ONLYDIR GMP_BIG_ENDIAN "
"GMP_LITTLE_ENDIAN GMP_LSW_FIRST GMP_MSW_FIRST GMP_NATIVE_ENDIAN GMP_ROUND_MINUSINF GMP_ROUND_PLUSINF GMP_ROUND_ZERO "
"GMP_VERSION "
"HASH_HMAC HTML_ENTITIES HTML_SPECIALCHARS "
"ICONV_IMPL ICONV_MIME_DECODE_CONTINUE_ON_ERROR ICONV_MIME_DECODE_STRICT ICONV_VERSION INDIAN "
"INF INFO_ALL INFO_CONFIGURATION INFO_CREDITS INFO_ENVIRONMENT INFO_GENERAL INFO_LICENSE INFO_MODULES INFO_VARIABLES "
"INI_ALL INI_PERDIR INI_SCANNER_NORMAL INI_SCANNER_RAW INI_SCANNER_TYPED INI_SYSTEM INI_USER ISO8601 IS_ABSTRACT "
"IS_DEPRECATED IS_EXPLICIT_ABSTRACT IS_FINAL IS_IMPLICIT_ABSTRACT IS_PRIVATE IS_PROTECTED IS_PUBLIC IS_STATIC "
"IT_MODE_DELETE IT_MODE_FIFO IT_MODE_KEEP IT_MODE_LIFO "
"JSON_BIGINT_AS_STRING JSON_ERROR_CTRL_CHAR JSON_ERROR_DEPTH JSON_ERROR_INF_OR_NAN JSON_ERROR_INVALID_PROPERTY_NAME "
"JSON_ERROR_NONE JSON_ERROR_RECURSION JSON_ERROR_STATE_MISMATCH JSON_ERROR_SYNTAX "
"JSON_ERROR_UNSUPPORTED_TYPE JSON_ERROR_UTF16 JSON_ERROR_UTF8 JSON_FORCE_OBJECT "
"JSON_HEX_AMP JSON_HEX_APOS JSON_HEX_QUOT JSON_HEX_TAG JSON_INVALID_UTF8_IGNORE JSON_INVALID_UTF8_SUBSTITUTE "
"JSON_NUMERIC_CHECK JSON_OBJECT_AS_ARRAY JSON_PARTIAL_OUTPUT_ON_ERROR JSON_PRESERVE_ZERO_FRACTION JSON_PRETTY_PRINT "
"JSON_THROW_ON_ERROR JSON_UNESCAPED_LINE_TERMINATORS JSON_UNESCAPED_SLASHES JSON_UNESCAPED_UNICODE "
"KEY_AS_FILENAME KEY_AS_PATHNAME KEY_MODE_MASK "
"LC_ALL LC_COLLATE LC_CTYPE LC_MESSAGES LC_MONETARY LC_NUMERIC LC_TIME LEAVES_ONLY LOCK_EX LOCK_NB LOCK_SH LOCK_UN "
"LOG_ALERT LOG_AUTH LOG_AUTHPRIV LOG_CONS LOG_CRIT LOG_CRON LOG_DAEMON LOG_DEBUG LOG_EMERG LOG_ERR LOG_INFO LOG_KERN "
"LOG_LOCAL0 LOG_LOCAL1 LOG_LOCAL2 LOG_LOCAL3 LOG_LOCAL4 LOG_LOCAL5 LOG_LOCAL6 LOG_LOCAL7 LOG_LPR LOG_MAIL "
"LOG_NDELAY LOG_NEWS LOG_NOTICE LOG_NOWAIT LOG_ODELAY LOG_PERROR LOG_PID LOG_SYSLOG LOG_USER LOG_UUCP LOG_WARNING "
"MATCH MB_CASE_FOLD MB_CASE_FOLD_SIMPLE MB_CASE_LOWER MB_CASE_LOWER_SIMPLE MB_CASE_TITLE MB_CASE_TITLE_SIMPLE "
"MB_CASE_UPPER MB_CASE_UPPER_SIMPLE MB_ONIGURUMA_VERSION MIT_KEYS_ASSOC MIT_KEYS_NUMERIC MIT_NEED_ALL MIT_NEED_ANY "
"MYSQLI_ASSOC MYSQLI_AUTO_INCREMENT_FLAG MYSQLI_BINARY_FLAG MYSQLI_BLOB_FLAG MYSQLI_BOTH MYSQLI_CLIENT_COMPRESS "
"MYSQLI_CLIENT_IGNORE_SPACE MYSQLI_CLIENT_INTERACTIVE MYSQLI_CLIENT_MULTI_QUERIES MYSQLI_CLIENT_NO_SCHEMA "
"MYSQLI_CLIENT_SSL MYSQLI_CLIENT_SSL_DONT_VERIFY_SERVER_CERT "
"MYSQLI_CURSOR_TYPE_FOR_UPDATE MYSQLI_CURSOR_TYPE_NO_CURSOR MYSQLI_CURSOR_TYPE_READ_ONLY MYSQLI_CURSOR_TYPE_SCROLLABLE "
"MYSQLI_DATA_TRUNCATED MYSQLI_DEBUG_TRACE_ENABLED MYSQLI_ENUM_FLAG MYSQLI_GROUP_FLAG "
"MYSQLI_INIT_COMMAND MYSQLI_IS_MARIADB MYSQLI_MULTIPLE_KEY_FLAG "
"MYSQLI_NEED_DATA MYSQLI_NOT_NULL_FLAG MYSQLI_NO_DATA MYSQLI_NUM MYSQLI_NUM_FLAG MYSQLI_OPT_CONNECT_TIMEOUT "
"MYSQLI_OPT_INT_AND_FLOAT_NATIVE MYSQLI_OPT_LOCAL_INFILE MYSQLI_OPT_NET_CMD_BUFFER_SIZE MYSQLI_OPT_NET_READ_BUFFER_SIZE "
"MYSQLI_OPT_READ_TIMEOUT MYSQLI_OPT_SSL_VERIFY_SERVER_CERT MYSQLI_PART_KEY_FLAG MYSQLI_PRI_KEY_FLAG "
"MYSQLI_READ_DEFAULT_FILE MYSQLI_READ_DEFAULT_GROUP MYSQLI_REFRESH_GRANT MYSQLI_REFRESH_HOSTS MYSQLI_REFRESH_LOG "
"MYSQLI_REFRESH_MASTER MYSQLI_REFRESH_REPLICA MYSQLI_REFRESH_SLAVE MYSQLI_REFRESH_STATUS "
"MYSQLI_REFRESH_TABLES MYSQLI_REFRESH_THREADS "
"MYSQLI_REPORT_ALL MYSQLI_REPORT_ERROR MYSQLI_REPORT_INDEX MYSQLI_REPORT_OFF MYSQLI_REPORT_STRICT "
"MYSQLI_SERVER_PUBLIC_KEY MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED MYSQLI_SERVER_QUERY_NO_INDEX_USED "
"MYSQLI_SET_CHARSET_NAME MYSQLI_SET_FLAG "
"MYSQLI_STMT_ATTR_CURSOR_TYPE MYSQLI_STMT_ATTR_PREFETCH_ROWS MYSQLI_STMT_ATTR_UPDATE_MAX_LENGTH MYSQLI_STORE_RESULT "
"MYSQLI_TIMESTAMP_FLAG "
"MYSQLI_TRANS_COR_AND_CHAIN MYSQLI_TRANS_COR_AND_NO_CHAIN MYSQLI_TRANS_COR_NO_RELEASE MYSQLI_TRANS_COR_RELEASE "
"MYSQLI_TRANS_START_CONSISTENT_SNAPSHOT MYSQLI_TRANS_START_READ_ONLY MYSQLI_TRANS_START_READ_WRITE "
"MYSQLI_TYPE_BIT MYSQLI_TYPE_BLOB MYSQLI_TYPE_CHAR "
"MYSQLI_TYPE_DATE MYSQLI_TYPE_DATETIME MYSQLI_TYPE_DECIMAL MYSQLI_TYPE_DOUBLE MYSQLI_TYPE_ENUM MYSQLI_TYPE_FLOAT "
"MYSQLI_TYPE_GEOMETRY MYSQLI_TYPE_INT24 MYSQLI_TYPE_INTERVAL MYSQLI_TYPE_JSON "
"MYSQLI_TYPE_LONG MYSQLI_TYPE_LONGLONG MYSQLI_TYPE_LONG_BLOB MYSQLI_TYPE_MEDIUM_BLOB "
"MYSQLI_TYPE_NEWDATE MYSQLI_TYPE_NEWDECIMAL MYSQLI_TYPE_NULL MYSQLI_TYPE_SET MYSQLI_TYPE_SHORT MYSQLI_TYPE_STRING "
"MYSQLI_TYPE_TIME MYSQLI_TYPE_TIMESTAMP MYSQLI_TYPE_TINY MYSQLI_TYPE_TINY_BLOB MYSQLI_TYPE_VAR_STRING MYSQLI_TYPE_YEAR "
"MYSQLI_UNIQUE_KEY_FLAG MYSQLI_UNSIGNED_FLAG MYSQLI_USE_RESULT MYSQLI_ZEROFILL_FLAG M_1_PI M_2_PI M_2_SQRTPI M_E M_EULER "
"M_LN10 M_LN2 M_LNPI M_LOG10E M_LOG2E M_PI M_PI_2 M_PI_4 M_SQRT1_2 M_SQRT2 M_SQRT3 M_SQRTPI "
"NAN NEW_CURRENT_AND_KEY NULL_EMPTY_STRING NULL_NATURAL NULL_TO_STRING "
"PACIFIC PARAM_BOOL PARAM_EVT_ALLOC PARAM_EVT_EXEC_POST PARAM_EVT_EXEC_PRE "
"PARAM_EVT_FETCH_POST PARAM_EVT_FETCH_PRE PARAM_EVT_FREE PARAM_EVT_NORMALIZE PARAM_INPUT_OUTPUT PARAM_INT PARAM_LOB "
"PARAM_NULL PARAM_STMT PARAM_STR PARAM_STR_CHAR PARAM_STR_NATL PASSWORD_ARGON2I PASSWORD_ARGON2ID "
"PASSWORD_ARGON2_DEFAULT_MEMORY_COST PASSWORD_ARGON2_DEFAULT_THREADS PASSWORD_ARGON2_DEFAULT_TIME_COST PASSWORD_BCRYPT "
"PASSWORD_DEFAULT PATHINFO_BASENAME PATHINFO_DIRNAME PATHINFO_EXTENSION PATHINFO_FILENAME PATH_SEPARATOR PCRE_VERSION "
"PEAR_EXTENSION_DIR PEAR_INSTALL_DIR PER_COUNTRY PHP_BINARY PHP_BINDIR PHP_CONFIG_FILE_PATH PHP_CONFIG_FILE_SCAN_DIR "
"PHP_DATADIR PHP_DEBUG PHP_EOL PHP_EXTENSION_DIR PHP_EXTRA_VERSION "
"PHP_FD_SETSIZE PHP_FLOAT_DIG PHP_FLOAT_EPSILON PHP_FLOAT_MAX PHP_FLOAT_MIN PHP_INT_MAX PHP_INT_MIN PHP_INT_SIZE "
"PHP_LIBDIR PHP_LOCALSTATEDIR PHP_MAJOR_VERSION PHP_MANDIR PHP_MAXPATHLEN PHP_MINOR_VERSION PHP_OS PHP_OS_FAMILY "
"PHP_OUTPUT_HANDLER_CLEAN PHP_OUTPUT_HANDLER_CLEANABLE PHP_OUTPUT_HANDLER_CONT PHP_OUTPUT_HANDLER_END "
"PHP_OUTPUT_HANDLER_FINAL PHP_OUTPUT_HANDLER_FLUSH PHP_OUTPUT_HANDLER_FLUSHABLE PHP_OUTPUT_HANDLER_REMOVABLE "
"PHP_OUTPUT_HANDLER_START PHP_OUTPUT_HANDLER_STDFLAGS PHP_OUTPUT_HANDLER_WRITE PHP_PREFIX "
"PHP_QUERY_RFC1738 PHP_QUERY_RFC3986 "
"PHP_RELEASE_VERSION PHP_ROUND_HALF_DOWN PHP_ROUND_HALF_EVEN PHP_ROUND_HALF_ODD PHP_ROUND_HALF_UP "
"PHP_SAPI PHP_SESSION_ACTIVE PHP_SESSION_DISABLED PHP_SESSION_NONE PHP_SHLIB_SUFFIX PHP_SYSCONFDIR "
"PHP_URL_FRAGMENT PHP_URL_HOST PHP_URL_PASS PHP_URL_PATH PHP_URL_PORT PHP_URL_QUERY PHP_URL_SCHEME PHP_URL_USER "
"PHP_VERSION PHP_VERSION_ID PHP_WINDOWS_EVENT_CTRL_BREAK PHP_WINDOWS_EVENT_CTRL_C "
"PHP_WINDOWS_NT_DOMAIN_CONTROLLER PHP_WINDOWS_NT_SERVER PHP_WINDOWS_NT_WORKSTATION PHP_WINDOWS_VERSION_BUILD "
"PHP_WINDOWS_VERSION_MAJOR PHP_WINDOWS_VERSION_MINOR PHP_WINDOWS_VERSION_PLATFORM PHP_WINDOWS_VERSION_PRODUCTTYPE "
"PHP_WINDOWS_VERSION_SP_MAJOR PHP_WINDOWS_VERSION_SP_MINOR PHP_WINDOWS_VERSION_SUITEMASK PHP_ZTS "
"PREFIX_END_HAS_NEXT PREFIX_END_LAST PREFIX_LEFT PREFIX_MID_HAS_NEXT PREFIX_MID_LAST PREFIX_RIGHT "
"PREG_BACKTRACK_LIMIT_ERROR PREG_BAD_UTF8_ERROR PREG_BAD_UTF8_OFFSET_ERROR PREG_INTERNAL_ERROR PREG_JIT_STACKLIMIT_ERROR "
"PREG_NO_ERROR PREG_OFFSET_CAPTURE PREG_PATTERN_ORDER PREG_RECURSION_LIMIT_ERROR "
"PREG_SET_ORDER PREG_SPLIT_DELIM_CAPTURE PREG_SPLIT_NO_EMPTY PREG_SPLIT_OFFSET_CAPTURE PREG_UNMATCHED_AS_NULL "
"PSFS_ERR_FATAL PSFS_FEED_ME PSFS_FLAG_FLUSH_CLOSE PSFS_FLAG_FLUSH_INC PSFS_FLAG_NORMAL PSFS_PASS_ON "
"READ_AHEAD READ_CSV REPLACE RSS "
"SCANDIR_SORT_ASCENDING SCANDIR_SORT_DESCENDING SCANDIR_SORT_NONE SEEK_CUR SEEK_END SEEK_SET SELF_FIRST SID "
"SKIP_DOTS SKIP_EMPTY "
"SORT_ASC SORT_DESC SORT_FLAG_CASE SORT_LOCALE_STRING SORT_NATURAL SORT_NUMERIC SORT_REGULAR SORT_STRING SPLIT "
"SQLITE3_ASSOC SQLITE3_BLOB SQLITE3_BOTH SQLITE3_DETERMINISTIC SQLITE3_FLOAT SQLITE3_INTEGER SQLITE3_NULL SQLITE3_NUM "
"SQLITE3_OPEN_CREATE SQLITE3_OPEN_READONLY SQLITE3_OPEN_READWRITE SQLITE3_TEXT SQLITE_DETERMINISTIC STD_PROP_LIST "
"STREAM_BUFFER_FULL STREAM_BUFFER_LINE STREAM_BUFFER_NONE "
"STREAM_CAST_AS_STREAM STREAM_CAST_FOR_SELECT STREAM_CLIENT_ASYNC_CONNECT STREAM_CLIENT_CONNECT STREAM_CLIENT_PERSISTENT "
"STREAM_FILTER_ALL STREAM_FILTER_READ STREAM_FILTER_WRITE "
"STREAM_IPPROTO_ICMP STREAM_IPPROTO_IP STREAM_IPPROTO_RAW STREAM_IPPROTO_TCP STREAM_IPPROTO_UDP "
"STREAM_META_ACCESS STREAM_META_GROUP STREAM_META_GROUP_NAME STREAM_META_OWNER STREAM_META_OWNER_NAME STREAM_META_TOUCH "
"STREAM_NOTIFY_AUTH_REQUIRED STREAM_NOTIFY_AUTH_RESULT STREAM_NOTIFY_COMPLETED STREAM_NOTIFY_CONNECT "
"STREAM_NOTIFY_FAILURE STREAM_NOTIFY_FILE_SIZE_IS STREAM_NOTIFY_MIME_TYPE_IS STREAM_NOTIFY_PROGRESS "
"STREAM_NOTIFY_REDIRECTED STREAM_NOTIFY_RESOLVE "
"STREAM_NOTIFY_SEVERITY_ERR STREAM_NOTIFY_SEVERITY_INFO STREAM_NOTIFY_SEVERITY_WARN "
"STREAM_PF_INET STREAM_PF_INET6 STREAM_PF_UNIX STREAM_SERVER_BIND STREAM_SERVER_LISTEN "
"STREAM_SHUT_RD STREAM_SHUT_RDWR STREAM_SHUT_WR "
"STREAM_SOCK_DGRAM STREAM_SOCK_RAW STREAM_SOCK_RDM STREAM_SOCK_SEQPACKET STREAM_SOCK_STREAM STREAM_USE_PATH "
"STR_PAD_BOTH STR_PAD_LEFT STR_PAD_RIGHT SUNFUNCS_RET_DOUBLE SUNFUNCS_RET_STRING SUNFUNCS_RET_TIMESTAMP "
"TOSTRING_USE_CURRENT TOSTRING_USE_INNER TOSTRING_USE_KEY UNIX_PATHS USE_KEY UTC W3C "

, // 8 function
"abs( accept( acos( acosh( add( addAll( addAttribute( addChild( addcslashes( addslashes( allowsNull( append( "
"array_change_key_case( array_chunk( array_column( array_combine( array_count_values( "
"array_diff( array_diff_assoc( array_diff_key( array_diff_uassoc( array_diff_ukey( "
"array_fill( array_fill_keys( array_filter( array_flip( "
"array_intersect( array_intersect_assoc( array_intersect_key( array_intersect_uassoc( array_intersect_ukey( "
"array_is_list( array_key_exists( array_key_first( array_key_last( array_keys( "
"array_map( array_merge( array_merge_recursive( array_multisort( array_pad( array_pop( array_product( array_push( "
"array_rand( array_reduce( array_replace( array_replace_recursive( array_reverse( "
"array_search( array_shift( array_slice( array_splice( array_sum( array_udiff( array_udiff_assoc( array_udiff_uassoc( "
"array_uintersect( array_uintersect_assoc( array_uintersect_uassoc( array_unique( array_unshift( array_values( "
"array_walk( array_walk_recursive( arsort( asXML( asin( asinh( asort( assert( assert_options( "
"atan( atan2( atanh( attach( attachIterator( attr_get( attr_set( attributes( autocommit( "
"backup( base64_decode( base64_encode( base_convert( basename( "
"bcadd( bccomp( bcdiv( bcmod( bcmul( bcpow( bcpowmod( bcscale( bcsqrt( bcsub( "
"beginChildren( beginIteration( beginTransaction( begin_transaction( "
"bin2hex( bind( bindColumn( bindParam( bindTo( bindValue( bind_param( bind_result( bindec( boolval( bottom( busyTimeout( "
"call( callGetChildren( callHasChildren( call_user_func( call_user_func_array( canBePassedByValue( cases( ceil( "
"change_user( changes( character_set_name( chdir( checkdate( checkdnsrr( chgrp( children( chmod( chop( chown( "
"chr( chroot( chunk_split( class_alias( class_exists( class_implements( class_parents( class_uses( "
"clear( clearstatcache( cli_get_process_title( cli_set_process_title( close( closeCursor( closedir( closelog( "
"columnCount( columnName( columnType( commit( compact( compare( connect( connection_aborted( connection_status( "
"constant( contains( containsIterator( convert_uudecode( convert_uuencode( copy( cos( cosh( "
"count( countIterators( count_chars( crc32( create( createAggregate( createCollation( "
"createFromDateString( createFromFormat( createFromImmutable( createFromInterface( createFromMutable( createFunction( "
"create_sid( crypt( curl_close( curl_copy_handle( curl_errno( curl_error( curl_escape( curl_exec( curl_file_create( "
"curl_getinfo( curl_init( curl_multi_add_handle( curl_multi_close( curl_multi_errno( curl_multi_exec( "
"curl_multi_getcontent( curl_multi_info_read( curl_multi_init( curl_multi_remove_handle( "
"curl_multi_select( curl_multi_setopt( curl_multi_strerror( curl_pause( curl_reset( curl_setopt( curl_setopt_array( "
"curl_share_close( curl_share_errno( curl_share_init( curl_share_setopt( curl_share_strerror( curl_strerror( "
"curl_unescape( curl_version( current( "
"data_seek( date( date_add( "
"date_create( date_create_from_format( date_create_immutable( date_create_immutable_from_format( "
"date_date_set( date_default_timezone_get( date_default_timezone_set( date_diff( date_format( date_get_last_errors( "
"date_interval_create_from_date_string( date_interval_format( date_isodate_set( date_modify( date_offset_get( "
"date_parse( date_parse_from_format( date_sub( date_sun_info( "
"date_time_set( date_timestamp_get( date_timestamp_set( date_timezone_get( date_timezone_set( "
"debug( debugDumpParams( debug_backtrace( debug_print_backtrace( debug_zval_dump( decbin( dechex( decoct( "
"define( defined( deg2rad( dequeue( destroy( detach( detachIterator( diff( "
"dir( dir_closedir( dir_opendir( dir_readdir( dir_rewinddir( dirname( disk_free_space( disk_total_space( diskfreespace( "
"dns_check_record( dns_get_mx( dns_get_record( doubleval( dump_debug_info( "
"echo( enableExceptions( end( endChildren( endIteration( enqueue( enum_exists( eof( "
"errorCode( errorInfo( error_clear_last( error_get_last( error_log( error_reporting( "
"escapeString( escapeshellarg( escapeshellcmd( "
"exchangeArray( exec( execute( execute_query( exp( explode( expm1( export( extension_loaded( extract( "
"fastcgi_finish_request( fclose( fdatasync( fdiv( feof( fetch( fetchAll( fetchArray( fetchColumn( fetchObject( "
"fetch_all( fetch_array( fetch_assoc( fetch_column( fetch_field( fetch_field_direct( fetch_fields( fetch_object( "
"fetch_row( fflush( fgetc( fgetcsv( fgets( field_seek( file( file_exists( file_get_contents( file_put_contents( "
"fileatime( filectime( filegroup( fileinode( filemtime( fileowner( fileperms( filesize( filetype( filter( finalize( "
"floatval( flock( floor( flush( fmod( fnmatch( fopen( format( forward_static_call( forward_static_call_array( "
"fpassthru( fpm_get_status( fprintf( fputcsv( fputs( "
"fread( free( free_result( from( fromArray( fromArrayElement( fromCallable( fscanf( fseek( fsockopen( fstat( fsync( "
"ftell( ftruncate( func_get_arg( func_get_args( func_num_args( function_exists( fwrite( "
"gc( gc_collect_cycles( gc_disable( gc_enable( gc_enabled( gc_mem_caches( gc_status( get( "
"getATime( getArguments( getArrayCopy( getArrayIterator( getAttribute( getAttributes( getAuthor( getAvailableDrivers( "
"getBackingType( getBackingValue( getBasename( getCTime( getCache( getCallable( getCase( getCases( getChildren( "
"getClassNames( getClasses( getClosure( getClosureScopeClass( getClosureThis( "
"getCode( getColumnMeta( getConstant( getConstants( getConstructor( getCopyright( getCsvControl( getCurrent( "
"getDateInterval( getDeclaringClass( getDeclaringFunction( "
"getDefaultProperties( getDefaultValue( getDefaultValueConstantName( getDependencies( getDepth( "
"getDocComment( getDocNamespaces( getEndDate( getEndLine( getEntry( getEnum( "
"getExecutingFile( getExecutingGenerator( getExecutingLine( getExtension( getExtensionName( getExtractFlags( "
"getFiber( getFile( getFileInfo( getFileName( getFilename( getFlags( getFunction( getFunctions( getGroup( getHash( "
"getINIEntries( getId( getInfo( getInnerIterator( getInode( getInterfaceNames( getInterfaces( "
"getIterator( getIteratorClass( getIteratorIndex( getIteratorMode( getLastErrors( getLine( getLinkTarget( getLocation( "
"getMTime( getMaxDepth( getMaxLineLen( getMessage( getMethod( getMethods( getMimeType( "
"getMode( getModifierNames( getModifiers( "
"getName( getNamespaceName( getNamespaces( getNumberOfParameters( getNumberOfRequiredParameters( getOffset( getOwner( "
"getParameters( getParentClass( getPath( getPathInfo( getPathname( getPerms( getPosition( getPostFilename( getPostfix( "
"getPrefix( getPregFlags( getPrevious( getProperties( getProperty( getPrototype( "
"getRealPath( getRecurrences( getReflectionConstant( getReflectionConstants( getRegex( getReturn( getReturnType( getSQL( "
"getSeverity( getShortName( getSize( getSqlState( "
"getStartDate( getStartLine( getStaticProperties( getStaticPropertyValue( getStaticVariables( "
"getSubIterator( getSubPath( getSubPathname( getTarget( getThis( getTimestamp( getTimezone( "
"getTrace( getTraceAsString( getTraitAliases( getTraitNames( getTraits( getTransitions( getType( getTypes( getURL( "
"getValue( getVersion( get_browser( get_called_class( get_cfg_var( get_charset( "
"get_class( get_class_methods( get_class_vars( get_client_info( get_connection_stats( get_current_user( get_debug_type( "
"get_declared_classes( get_declared_interfaces( get_declared_traits( "
"get_defined_constants( get_defined_functions( get_defined_vars( get_extension_funcs( "
"get_headers( get_html_translation_table( get_include_path( get_included_files( get_loaded_extensions( "
"get_mangled_object_vars( get_meta_tags( get_object_vars( get_parent_class( "
"get_required_files( get_resource_id( get_resource_type( get_resources( get_result( get_server_info( get_warnings( "
"getcwd( getdate( getenv( gethostbyaddr( gethostbyname( gethostbynamel( gethostname( getlastmod( "
"getmxrr( getmygid( getmyinode( getmypid( getmyuid( getopt( getprotobyname( getprotobynumber( getrandmax( getrusage( "
"getservbyname( getservbyport( gettimeofday( gettype( glob( gmdate( gmmktime( gmp_abs( gmp_add( gmp_and( gmp_binomial( "
"gmp_clrbit( gmp_cmp( gmp_com( gmp_div( gmp_div_q( gmp_div_qr( gmp_div_r( gmp_divexact( gmp_export( gmp_fact( "
"gmp_gcd( gmp_gcdext( gmp_hamdist( gmp_import( gmp_init( gmp_intval( gmp_invert( gmp_jacobi( gmp_kronecker( "
"gmp_lcm( gmp_legendre( gmp_mod( gmp_mul( gmp_neg( gmp_nextprime( gmp_or( "
"gmp_perfect_power( gmp_perfect_square( gmp_popcount( gmp_pow( gmp_powm( gmp_prob_prime( "
"gmp_random_bits( gmp_random_range( gmp_random_seed( gmp_root( gmp_rootrem( "
"gmp_scan0( gmp_scan1( gmp_setbit( gmp_sign( gmp_sqrt( gmp_sqrtrem( gmp_strval( gmp_sub( gmp_testbit( gmp_xor( "
"hasCase( hasChildren( hasConstant( hasDefaultValue( hasMethod( hasNext( hasProperty( hasReturnType( hasType( hash( "
"hash_algos( hash_copy( hash_equals( hash_file( hash_final( hash_hkdf( hash_hmac( hash_hmac_algos( hash_hmac_file( "
"hash_init( hash_pbkdf2( hash_update( hash_update_file( hash_update_stream( "
"header( header_register_callback( header_remove( headers_list( headers_sent( hebrev( hex2bin( hexdec( "
"highlight_file( highlight_string( hrtime( "
"html_entity_decode( htmlentities( htmlspecialchars( htmlspecialchars_decode( http_build_query( http_response_code( "
"hypot( "
"iconv( iconv_get_encoding( iconv_mime_decode( iconv_mime_decode_headers( iconv_mime_encode( "
"iconv_set_encoding( iconv_strlen( iconv_strpos( iconv_strrpos( iconv_substr( idate( ignore_user_abort( "
"implementsInterface( implode( inNamespace( inTransaction( in_array( inet_ntop( inet_pton( info( "
"ini_alter( ini_get( ini_get_all( ini_parse_quantity( ini_restore( ini_set( insert( intdiv( interface_exists( intval( "
"invoke( invokeArgs( ip2long( isAbstract( isAnonymous( isBacked( isBuiltin( "
"isCloneable( isClosure( isConstructor( isCorrupted( "
"isDefault( isDefaultValueAvailable( isDefaultValueConstant( isDeprecated( isDestructor( isDir( isDot( "
"isEmpty( isEnum( isExecutable( isFile( isFinal( isGenerator( "
"isInitialized( isInstance( isInstantiable( isInterface( isInternal( isIterable( isLink( isOptional( "
"isPassedByReference( isPersistent( isPrivate( isPromoted( isProtected( isPublic( "
"isReadOnly( isReadable( isRepeated( isRunning( isStarted( isStatic( isSubclassOf( isSuspended( "
"isTemporary( isTerminated( isTrait( isUserDefined( isVariadic( isWritable( is_a( is_array( is_bool( "
"is_callable( is_countable( is_dir( is_double( is_executable( is_file( is_finite( is_float( "
"is_infinite( is_int( is_integer( is_iterable( is_link( is_long( is_nan( is_null( is_numeric( is_object( "
"is_readable( is_resource( is_scalar( is_string( is_subclass_of( is_uploaded_file( is_writable( is_writeable( "
"iterator_apply( iterator_count( iterator_to_array( "
"join( jsonSerialize( json_decode( json_encode( json_last_error( json_last_error_msg( "
"key( key_exists( kill( krsort( ksort( "
"lastErrorCode( lastErrorMsg( lastInsertId( lastInsertRowID( lcfirst( lcg_value( lchgrp( lchown( levenshtein( "
"link( linkinfo( listAbbreviations( listIdentifiers( loadExtension( localeconv( localtime( log( log10( log1p( long2ip( "
"lstat( ltrim( "
"mail( max( mb_check_encoding( mb_chr( mb_convert_case( mb_convert_encoding( mb_convert_kana( mb_convert_variables( "
"mb_decode_mimeheader( mb_decode_numericentity( mb_detect_encoding( mb_detect_order( "
"mb_encode_mimeheader( mb_encode_numericentity( mb_encoding_aliases( mb_ereg( mb_ereg_match( "
"mb_ereg_replace( mb_ereg_replace_callback( mb_ereg_search( mb_ereg_search_getpos( mb_ereg_search_getregs( "
"mb_ereg_search_init( mb_ereg_search_pos( mb_ereg_search_regs( mb_ereg_search_setpos( mb_eregi( mb_eregi_replace( "
"mb_get_info( mb_http_input( mb_http_output( mb_internal_encoding( mb_language( mb_list_encodings( "
"mb_ord( mb_output_handler( mb_parse_str( mb_preferred_mime_name( mb_regex_encoding( mb_regex_set_options( mb_send_mail( "
"mb_split( mb_str_split( mb_strcut( mb_strimwidth( mb_stripos( mb_stristr( mb_strlen( mb_strpos( "
"mb_strrchr( mb_strrichr( mb_strripos( mb_strrpos( mb_strstr( mb_strtolower( mb_strtoupper( mb_strwidth( "
"mb_substitute_character( mb_substr( mb_substr_count( md5( md5_file( "
"memory_get_peak_usage( memory_get_usage( memory_reset_peak_usage( metaphone( method_exists( microtime( min( "
"mkdir( mktime( modify( more_results( move_uploaded_file( mt_getrandmax( mt_rand( mt_srand( multi_query( "
"natcasesort( natsort( net_get_interfaces( newInstance( newInstanceArgs( newInstanceWithoutConstructor( "
"next( nextElement( nextRowset( next_result( nl2br( nl_langinfo( notify( numColumns( num_rows( number_format( "
"ob_clean( ob_end_clean( ob_end_flush( ob_flush( "
"ob_get_clean( ob_get_contents( ob_get_flush( ob_get_length( ob_get_level( ob_get_status( ob_gzhandler( "
"ob_iconv_handler( ob_implicit_flush( ob_list_handlers( ob_start( octdec( "
"offsetExists( offsetGet( offsetSet( offsetUnset( onClose( onCreate( "
"open( openBlob( openFile( opendir( openlog( options( ord( output_add_rewrite_var( output_reset_rewrite_vars( "
"pack( paramCount( parse_ini_file( parse_ini_string( parse_str( parse_url( "
"passthru( password_algos( password_get_info( password_hash( password_needs_rehash( password_verify( pathinfo( pclose( "
"pfsockopen( php_ini_loaded_file( php_ini_scanned_files( php_sapi_name( php_strip_whitespace( php_uname( phpcredits( "
"phpinfo( phpversion( pi( ping( poll( pop( popen( pos( pow( preg_filter( preg_grep( "
"preg_last_error( preg_last_error_msg( preg_match( preg_match_all( preg_quote( "
"preg_replace( preg_replace_callback( preg_replace_callback_array( preg_split( prepare( prev( print( print_r( printf( "
"proc_close( proc_get_status( proc_nice( proc_open( proc_terminate( property_exists( push( putenv( "
"query( querySingle( quote( quoted_printable_decode( quoted_printable_encode( quotemeta( "
"rad2deg( rand( random_bytes( random_int( range( rawurldecode( rawurlencode( "
"read( readOnly( readdir( readfile( readlink( "
"real_connect( real_escape_string( real_query( realpath( realpath_cache_get( realpath_cache_size( reap_async_query( "
"recoverFromCorruption( refresh( registerXPathNamespace( register_shutdown_function( register_tick_function( "
"release_savepoint( removeAll( removeAllExcept( rename( "
"reset( restore_error_handler( restore_exception_handler( result_metadata( resume( returnsReference( rewind( rewinddir( "
"rmdir( rollBack( rollback( round( rowCount( rsort( rtrim( "
"savepoint( scandir( seek( select_db( send( send_long_data( serialize( session_abort( "
"session_cache_expire( session_cache_limiter( session_commit( session_create_id( session_decode( session_destroy( "
"session_encode( session_gc( session_get_cookie_params( session_id( session_module_name( session_name( "
"session_regenerate_id( session_register_shutdown( session_reset( "
"session_save_path( session_set_cookie_params( session_set_save_handler( session_start( session_status( session_unset( "
"session_write_close( setAccessible( setAttribute( setAuthorizer( setCsvControl( setDate( setExtractFlags( "
"setFetchMode( setFileClass( setFlags( setISODate( setInfo( setInfoClass( setIteratorClass( setIteratorMode( "
"setMaxDepth( setMaxLineLen( setMimeType( setMode( setPostFilename( setPostfix( setPrefixPart( setPregFlags( "
"setSize( setStaticPropertyValue( setTime( setTimestamp( setTimezone( setValue( "
"set_charset( set_error_handler( set_exception_handler( set_file_buffer( set_include_path( set_time_limit( setcookie( "
"setlocale( setrawcookie( settype( sha1( sha1_file( shell_exec( shift( show_source( shuffle( "
"similar_text( simplexml_import_dom( simplexml_load_file( simplexml_load_string( sin( sinh( sizeof( sleep( "
"socket_get_status( socket_set_blocking( socket_set_timeout( sort( soundex( spl_autoload( "
"spl_autoload_call( spl_autoload_extensions( spl_autoload_functions( spl_autoload_register( spl_autoload_unregister( "
"spl_classes( spl_object_hash( spl_object_id( sprintf( sqrt( srand( sscanf( ssl_set( start( stat( stmt_init( "
"store_result( str_contains( str_ends_with( str_getcsv( str_ireplace( str_pad( str_repeat( str_replace( str_rot13( "
"str_shuffle( str_split( str_starts_with( str_word_count( strcasecmp( strchr( strcmp( strcoll( strcspn( "
"stream_bucket_append( stream_bucket_make_writeable( stream_bucket_new( stream_bucket_prepend( stream_cast( "
"stream_close( stream_context_create( stream_context_get_default( stream_context_get_options( stream_context_get_params( "
"stream_context_set_default( stream_context_set_option( stream_context_set_params( stream_copy_to_stream( stream_eof( "
"stream_filter_append( stream_filter_prepend( stream_filter_register( stream_filter_remove( stream_flush( "
"stream_get_contents( stream_get_filters( stream_get_line( stream_get_meta_data( stream_get_transports( "
"stream_get_wrappers( stream_is_local( stream_isatty( stream_lock( stream_metadata( stream_notification_callback( "
"stream_open( stream_read( stream_register_wrapper( stream_resolve_include_path( stream_seek( stream_select( "
"stream_set_blocking( stream_set_chunk_size( stream_set_option( stream_set_read_buffer( stream_set_timeout( "
"stream_set_write_buffer( stream_socket_accept( stream_socket_client( stream_socket_enable_crypto( "
"stream_socket_get_name( stream_socket_pair( stream_socket_recvfrom( "
"stream_socket_sendto( stream_socket_server( stream_socket_shutdown( stream_stat( stream_supports_lock( "
"stream_tell( stream_truncate( stream_wrapper_register( stream_wrapper_restore( stream_wrapper_unregister( stream_write( "
"strip_tags( stripcslashes( stripos( stripslashes( stristr( strlen( strnatcasecmp( strnatcmp( strncasecmp( strncmp( "
"strpbrk( strpos( strrchr( strrev( strripos( strrpos( strspn( strstr( strtok( strtolower( strtotime( strtoupper( strtr( "
"strval( sub( substr( substr_compare( substr_count( substr_replace( suspend( "
"symlink( sys_get_temp_dir( sys_getloadavg( syslog( system( "
"tan( tanh( tempnam( thread_safe( throw( time( time_nanosleep( time_sleep_until( timezone_abbreviations_list( "
"timezone_identifiers_list( timezone_location_get( timezone_name_from_abbr( timezone_name_get( "
"timezone_offset_get( timezone_open( timezone_transitions_get( timezone_version_get( tmpfile( toArray( top( touch( "
"trait_exists( trigger_error( trim( tryFrom( "
"uasort( ucfirst( ucwords( uksort( umask( uniqid( unlink( unpack( unregister_tick_function( unserialize( unshift( "
"update( updateTimestamp( url_stat( urldecode( urlencode( use_result( user_error( usleep( usort( "
"valid( validateId( var_dump( var_export( version( version_compare( vfprintf( vprintf( vsprintf( wordwrap( write( xpath( "
"zend_thread_id( zend_version( "

, // 9 misc
"AUTH_TYPE DOCUMENT_ROOT GATEWAY_INTERFACE "
"HTTPS HTTP_ACCEPT HTTP_ACCEPT_CHARSET HTTP_ACCEPT_ENCODING HTTP_ACCEPT_LANGUAGE HTTP_CONNECTION HTTP_HOST HTTP_REFERER "
"HTTP_USER_AGENT "
"ORIG_PATH_INFO PATH_INFO PATH_TRANSLATED PHP_AUTH_DIGEST PHP_AUTH_PW PHP_AUTH_USER PHP_SELF QUERY_STRING "
"REDIRECT_REMOTE_USER REMOTE_ADDR REMOTE_HOST REMOTE_PORT REMOTE_USER "
"REQUEST_METHOD REQUEST_TIME REQUEST_TIME_FLOAT REQUEST_URI "
"SCRIPT_FILENAME SCRIPT_NAME "
"SERVER_ADDR SERVER_ADMIN SERVER_NAME SERVER_PORT SERVER_PROTOCOL SERVER_SIGNATURE SERVER_SOFTWARE "
"affected_rows argc argv client_info client_version code connect_errno connect_error context current current_field "
"data days end errno error errorInfo error_list field_count filtername host_info "
"id include_start_date info insert_id interval invert lengths message mime name num_rows "
"param_count params postname protocol_version queryString reconnect recurrences replacement report_mode "
"server_info server_version sqlstate start stream thread_id type warning_count "

, // 10 JavaScript
"Infinity NaN arguments async await break case catch class const continue debugger default delete do else export extends "
"false finally for function globalThis if import in instanceof let new null return static super switch "
"this throw true try typeof undefined var void while with yield "

, // 11 phpdoc
"api author category copyright deprecated example filesource global ignore internal license link method "
"package param property return see since source subpackage throws todo used uses var version "

, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated

, // 15 Code Snippet
"for^() if^() switch^() while^() elseif^() else^{} foreach^() catch^() "
}};

static EDITSTYLE Styles_PHP[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_PHP_WORD, NP2StyleX_Keyword, L"bold; fore:#FF8000" },
	{ SCE_PHP_WORD2, NP2StyleX_TypeKeyword, L"bold; fore:#FF8000" },
	{ SCE_PHP_ATTRIBUTE, NP2StyleX_Attribute, L"fore:#FF8000" },
	{ SCE_PHP_CLASS, NP2StyleX_Class, L"bold; fore:#007F7F" },
	{ SCE_PHP_INTERFACE, NP2StyleX_Interface, L"bold; fore:#1E90FF" },
	{ SCE_PHP_TRAIT, NP2StyleX_Trait, L"bold; fore:#007F7F" },
	{ SCE_PHP_ENUM, NP2StyleX_Enumeration, L"fore:#FF8000" },
	{ SCE_PHP_FUNCTION_DEFINITION, NP2StyleX_FunctionDefinition, L"bold; fore:#A46000" },
	{ SCE_PHP_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ SCE_PHP_MAGIC_METHOD, NP2StyleX_MagicMethod, L"fore:#0080C0" },
	{ SCE_PHP_MAGIC_CONSTANT, NP2StyleX_MagicConstant, L"fore:#FF8000" },
	{ SCE_PHP_CONSTANT, NP2StyleX_Constant, L"fore:#B000B0" },
	{ SCE_PHP_PREDEFINED_VARIABLE, NP2StyleX_PredefinedVariable, L"bold; italic; fore:#0080C0" },
	{ MULTI_STYLE(SCE_PHP_VARIABLE, SCE_PHP_VARIABLE2, 0, 0), NP2StyleX_Variable, L"italic; fore:#003CE6" },
	{ MULTI_STYLE(SCE_PHP_COMMENTLINE, SCE_PHP_COMMENTBLOCK, 0, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ SCE_PHP_COMMENTBLOCKDOC, NP2StyleX_DocComment, L"fore:#408040" },
	{ SCE_PHP_COMMENTTAGAT, NP2StyleX_DocCommentTag, L"fore:#408080" },
	{ SCE_PHP_TASKMARKER, NP2StyleX_TaskMarker, L"bold; fore:#408080" },
	{ MULTI_STYLE(SCE_PHP_STRING_SQ, SCE_PHP_STRING_DQ, 0, 0), NP2StyleX_String, L"fore:#008000" },
	{ MULTI_STYLE(SCE_PHP_HEREDOC, SCE_PHP_HEREDOC_ID, 0, 0), NP2StyleX_HeredocString, L"fore:#648000" },
	{ MULTI_STYLE(SCE_PHP_NOWDOC, SCE_PHP_NOWDOC_ID, 0, 0), NP2StyleX_NowdocString, L"fore:#A46000" },
	{ SCE_PHP_STRING_BT, NP2StyleX_Backticks, L"fore:#FF0080" },
	{ SCE_PHP_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_PHP_FORMAT_SPECIFIER, NP2StyleX_FormatSpecifier, L"fore:#7C5AF3" },
	{ SCE_PHP_LABEL, NP2StyleX_Label, L"back:#FFC040" },
	{ SCE_PHP_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ MULTI_STYLE(SCE_PHP_OPERATOR, SCE_PHP_OPERATOR2, 0, 0), NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexPHP = {
	SCLEX_PHPSCRIPT, NP2LEX_PHP,
//Settings++Autogenerated -- start of section automatically generated
	{
		LexerAttr_PrintfFormatSpecifier,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 1) | (1 << 2), // [php tag], class, method
		SCE_PHP_FUNCTION_DEFINITION,
		'\\', SCE_PHP_ESCAPECHAR, SCE_PHP_FORMAT_SPECIFIER,
		0,
		0, 0,
		SCE_PHP_OPERATOR, SCE_PHP_OPERATOR2
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // type
		| KeywordAttr32(2, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // class
		| KeywordAttr32(3, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // interface
		| KeywordAttr32(4, KeywordAttr_PreSorted) // predefined variable
		| KeywordAttr32(5, KeywordAttr_PreSorted) // magic constant
		| KeywordAttr32(6, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // magic method
		| KeywordAttr64(7, KeywordAttr_NoLexer) // constant
		| KeywordAttr64(8, KeywordAttr_NoLexer) // function
		| KeywordAttr64(9, KeywordAttr_NoLexer) // misc
		| KeywordAttr64(10, KeywordAttr_PreSorted | KeywordAttr_NoAutoComp) // JavaScript
		| KeywordAttr64(11, KeywordAttr_NoLexer | KeywordAttr_NoAutoComp) // phpdoc
	},
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"PHP Script", Styles_PHP),
	L"php; phps; phpt; phtml; php_cs; eyecode",
	&Keywords_PHP,
	Styles_PHP
};

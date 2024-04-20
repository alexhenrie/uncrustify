// *INDENT-OFF*

#include "token_enum.h"

//! type that stores two chunks between those no space shall occur
struct no_space_table_t
{
   E_Token first;  //! first  chunk
   E_Token second; //! second chunk
};

/**
 * this table lists out all combos where a space MUST be present
 * CT_UNKNOWN is a wildcard.
 *
 * TODO: some of these are no longer needed.
 */
const no_space_table_t add_space_table[] =
{
   { CT_ACCESS,                CT_TYPE                  },
   { CT_ACCESS,                CT_WORD                  },
   { CT_ALIGN,                 CT_PAREN_OPEN            },
   { CT_AMP,                   CT_WORD                  },
   { CT_ANGLE_CLOSE,           CT_BRACE_OPEN            },
   { CT_ANNOTATION,            CT_ANNOTATION            },
   { CT_ANNOTATION,            CT_TYPE                  },
   { CT_ASM_COLON,             CT_ASM_COLON             },
   { CT_ASM_COLON,             CT_STRING                },
   { CT_ASM,                   CT_FUNC_CALL             },
   { CT_ASM,                   CT_PAREN_OPEN            },
   { CT_ASM,                   CT_QUALIFIER             },
   { CT_ASSERT,                CT_PAREN_OPEN            },
   { CT_ASSIGN_FUNC_PROTO,     CT_DEFAULT               },
   { CT_ASSIGN_FUNC_PROTO,     CT_DELETE                },
   { CT_ASSIGN_FUNC_PROTO,     CT_NUMBER                },
   { CT_ATTRIBUTE,             CT_ATTRIBUTE             },
   { CT_ATTRIBUTE,             CT_BRACE_OPEN            },
   { CT_ATTRIBUTE,             CT_CASE                  },
   { CT_ATTRIBUTE,             CT_QUALIFIER             },
   { CT_ATTRIBUTE,             CT_TYPE                  },
   { CT_ATTRIBUTE,             CT_WORD                  },
   { CT_AUTORELEASEPOOL,       CT_BRACE_OPEN            },
   { CT_BODY,                  CT_BRACE_OPEN            },
   { CT_BRACE_CLOSE,           CT_BRACE_OPEN            },
   { CT_BRACE_CLOSE,           CT_CLASS                 },
   { CT_BRACE_CLOSE,           CT_FUNC_CALL             },
   { CT_BRACE_CLOSE,           CT_GETSET                },
   { CT_BRACE_CLOSE,           CT_IF                    },
   { CT_BRACE_CLOSE,           CT_OC_MSG_NAME           },
   { CT_BRACE_CLOSE,           CT_PAREN_OPEN            },
   { CT_BRACE_CLOSE,           CT_QUALIFIER             },
   { CT_BRACE_CLOSE,           CT_RETURN                },
   { CT_BRACE_CLOSE,           CT_TYPE                  },
   { CT_BRACE_CLOSE,           CT_WORD                  },
   { CT_BREAK,                 CT_WORD                  },
   { CT_BYREF,                 CT_INV                   },
   { CT_CASE_COLON,            CT_ATTRIBUTE             },
   { CT_CASE_COLON,            CT_BRACE_OPEN            },
   { CT_CASE_COLON,            CT_BREAK                 },
   { CT_CASE_COLON,            CT_RETURN                },
   { CT_CASE_COLON,            CT_WORD                  },
   { CT_CASE,                  CT_NEG                   },
   { CT_CASE,                  CT_PAREN_OPEN            },
   { CT_CASE,                  CT_STRING                },
   { CT_CATCH,                 CT_FUNC_CALL             },
   { CT_CLASS_COLON,           CT_FUNC_CALL             },
   { CT_CLASS_COLON,           CT_QUALIFIER             },
   { CT_CLASS_COLON,           CT_TYPE                  },
   { CT_CLASS_COLON,           CT_WORD                  },
   { CT_COLON,                 CT_COLON                 },
   { CT_COLON,                 CT_NUMBER                },
   { CT_COLON,                 CT_QUALIFIER             },
   { CT_COLON,                 CT_STRING                },
   { CT_COLON,                 CT_TYPE                  },
   { CT_COLON,                 CT_WORD                  },
   { CT_COMMENT_EMBED,         CT_FUNC_CLASS_PROTO      },
   { CT_COMMENT_MULTI,         CT_ELSE                  },
   { CT_CONCAT,                CT_STRING                },
   { CT_CONCAT,                CT_WORD                  },
   { CT_COND_COLON,            CT_FUNC_CALL             },
   { CT_COND_COLON,            CT_STRING                },
   { CT_COND_COLON,            CT_WORD                  },
   { CT_CONSTRUCT,             CT_TYPE                  },
   { CT_CONTINUE,              CT_WORD                  },
   { CT_CS_PROPERTY,           CT_BRACE_OPEN            },
   { CT_DEFAULT,               CT_STRING                },
   { CT_DEFAULT,               CT_WORD                  },
   { CT_DELEGATE,              CT_BRACE_OPEN            },
   { CT_D_MODULE,              CT_WORD                  },
   { CT_ELLIPSIS,              CT_NUMBER                },
   { CT_ELSE,                  CT_FOR                   },
   { CT_ELSE,                  CT_IF                    },
   { CT_ELSE,                  CT_PAREN_OPEN            },
   { CT_ELSE,                  CT_WORD                  },
   { CT_ELSEIF,                CT_CONSTEXPR             },
   { CT_ENUM_CLASS,            CT_ATTRIBUTE             },
   { CT_ENUM_CLASS,            CT_TYPE                  },
   { CT_ENUM,                  CT_ATTRIBUTE             },
   { CT_ENUM,                  CT_BRACE_OPEN            },
   { CT_ENUM,                  CT_ENUM_CLASS            },
   { CT_ENUM,                  CT_FPAREN_OPEN           },
   { CT_ENUM,                  CT_FUNCTION              },
   { CT_ENUM,                  CT_TYPE                  },
   { CT_ENUM,                  CT_WORD                  },
   { CT_EXECUTION_CONTEXT,     CT_EXECUTION_CONTEXT     },
   { CT_EXECUTION_CONTEXT,     CT_FPAREN_OPEN           },
   { CT_EXTERN,                CT_STRING                },
   { CT_FPAREN_CLOSE,          CT_ASSIGN_FUNC_PROTO     },
   { CT_FPAREN_CLOSE,          CT_ATTRIBUTE             },
   { CT_FPAREN_CLOSE,          CT_CLASS_COLON           },
   { CT_FPAREN_CLOSE,          CT_COND_COLON            },
   { CT_FPAREN_CLOSE,          CT_DEFAULT               },
   { CT_FPAREN_CLOSE,          CT_FUNC_CALL             },
   { CT_FPAREN_CLOSE,          CT_NEG                   },
   { CT_FPAREN_CLOSE,          CT_NOT                   },
   { CT_FPAREN_CLOSE,          CT_OC_MSG_NAME           },
   { CT_FPAREN_CLOSE,          CT_QUESTION              },
   { CT_FPAREN_CLOSE,          CT_STRING                },
   { CT_FPAREN_CLOSE,          CT_THROW                 },
   { CT_FPAREN_CLOSE,          CT_TYPE                  },
   { CT_FPAREN_CLOSE,          CT_WHERE_SPEC            },
   { CT_FPAREN_CLOSE,          CT_WORD                  },
   { CT_FRIEND,                CT_CLASS                 },
   { CT_FRIEND,                CT_STRUCT                },
   { CT_FRIEND,                CT_TYPE                  },
   { CT_FUNCTION,              CT_PAREN_OPEN            },
   { CT_FUNC_VAR,              CT_PPAREN_CLOSE          },
   { CT_GOTO,                  CT_WORD                  },
   { CT_IF,                    CT_CONSTEXPR             },
   { CT_IGNORED,               CT_IGNORED               },
   { CT_IMPORT,                CT_WORD                  },
   { CT_INCDEC_AFTER,          CT_DEREF                 },
   { CT_IN,                    CT_TYPE                  },
   { CT_IN,                    CT_WORD                  },
   { CT_LABEL_COLON,           CT_CS_PROPERTY           },
   { CT_LABEL_COLON,           CT_FUNC_CALL             },
   { CT_LABEL_COLON,           CT_NEW                   },
   { CT_LABEL_COLON,           CT_PAREN_OPEN            },
   { CT_LABEL_COLON,           CT_RETURN                },
   { CT_LABEL_COLON,           CT_STRING                },
   { CT_LABEL_COLON,           CT_TYPE                  },
   { CT_LABEL_COLON,           CT_WORD                  },
   { CT_LOCK,                  CT_PAREN_OPEN            },
   { CT_NAMESPACE,             CT_BRACE_OPEN            },
   { CT_NAMESPACE,             CT_TYPE                  },
   { CT_NAMESPACE,             CT_WORD                  },
   { CT_NATIVE,                CT_TAG                   },
   { CT_NUMBER,                CT_CHAR                  },
   { CT_NUMBER,                CT_COLON                 },
   { CT_NUMBER,                CT_ELLIPSIS              },
   { CT_NUMBER,                CT_OC_MSG_NAME           },
   { CT_NUMBER,                CT_PAREN_OPEN            },
   { CT_NUMBER,                CT_WORD                  },
   { CT_NUMBER_FP,             CT_NUMBER                },
   { CT_NUMBER_FP,             CT_OC_MSG_NAME           },
   { CT_NUMBER_FP,             CT_WORD                  },
   { CT_OC_CLASS,              CT_CLASS_COLON           },
   { CT_OC_CLASS,              CT_PAREN_OPEN            },
   { CT_OC_DYNAMIC,            CT_WORD                  },
   { CT_OC_IMPL,               CT_OC_CLASS              },
   { CT_OC_INTF,               CT_OC_CLASS              },
   { CT_OC_MSG_DECL,           CT_BRACE_OPEN            },
   { CT_OC_PROTOCOL,           CT_OC_CLASS              },
   { CT_PACKAGE,               CT_WORD                  },
   { CT_PAREN_CLOSE,           CT_ASM_COLON             },
   { CT_PAREN_CLOSE,           CT_COLON                 },
   { CT_PAREN_CLOSE,           CT_COND_COLON            },
   { CT_PAREN_CLOSE,           CT_CS_PROPERTY           },
   { CT_PAREN_CLOSE,           CT_DEREF                 },
   { CT_PAREN_CLOSE,           CT_NOT                   },
   { CT_PAREN_CLOSE,           CT_NUMBER                },
   { CT_PAREN_CLOSE,           CT_OC_MSG_NAME           },
   { CT_PAREN_CLOSE,           CT_POS                   },
   { CT_PAREN_CLOSE,           CT_QUALIFIER             },
   { CT_PAREN_CLOSE,           CT_TYPE                  },
   { CT_PP_DEFINE,             CT_MACRO                 },
   { CT_PP_DEFINE,             CT_MACRO_FUNC            },
   { CT_PP_DEFINE,             CT_NUMBER                },
   { CT_PP_DEFINE,             CT_PP_IGNORE             },
   { CT_PP_DEFINED,            CT_TYPE                  },
   { CT_PP_DEFINED,            CT_WORD                  },
   { CT_PP_ELSE,               CT_FUNC_CALL             },
   { CT_PP_ELSE,               CT_NOT                   },
   { CT_PP_ELSE,               CT_NUMBER                },
   { CT_PP_ELSE,               CT_PAREN_OPEN            },
   { CT_PP_ELSE,               CT_PP_DEFINED            },
   { CT_PP_ELSE,               CT_WORD                  },
   { CT_PP_EMIT,               CT_MACRO                 },
   { CT_PP_ENDIF,              CT_WORD                  },
   { CT_PP_ENDREGION,          CT_PREPROC_BODY          },
   { CT_PP_IF,                 CT_CNG_HASINC            },
   { CT_PP_IF,                 CT_FUNC_CALL             },
   { CT_PP_IF,                 CT_NOT                   },
   { CT_PP_IF,                 CT_NUMBER                },
   { CT_PP_IF,                 CT_PAREN_OPEN            },
   { CT_PP_IF,                 CT_PP_ASM                },
   { CT_PP_IF,                 CT_PP_DEFINE             },
   { CT_PP_IF,                 CT_PP_DEFINED            },
   { CT_PP_IF,                 CT_TYPE                  },
   { CT_PP_IF,                 CT_WORD                  },
   { CT_PP_INCLUDE,            CT_STRING                },
   { CT_PP_INCLUDE,            CT_WORD                  },
   { CT_PP_OTHER,              CT_PREPROC_BODY          },
   { CT_PP_PRAGMA,             CT_PP_ENDASM             },
   { CT_PP_PRAGMA,             CT_PP_ENDREGION          },
   { CT_PP_PRAGMA,             CT_PP_REGION             },
   { CT_PP_PROPERTY,           CT_WORD                  },
   { CT_PP_REGION,             CT_IGNORED               },
   { CT_PP_REGION,             CT_PREPROC_BODY          },
   { CT_PP_UNDEF,              CT_TYPE                  },
   { CT_PP_UNDEF,              CT_WORD                  },
   { CT_Q_EMIT,                CT_FUNC_CALL             },
   { CT_Q_FOREVER,             CT_BRACE_OPEN            },
   { CT_QUESTION,              CT_FUNC_CALL             },
   { CT_QUESTION,              CT_PAREN_OPEN            },
   { CT_QUESTION,              CT_STRING                },
   { CT_QUESTION,              CT_WORD                  },
   { CT_SBOOL,                 CT_TYPE                  },
   { CT_SCOMPARE,              CT_WORD                  },
   { CT_SPAREN_CLOSE,          CT_ATTRIBUTE             },
   { CT_SPAREN_CLOSE,          CT_AUTORELEASEPOOL       },
   { CT_SPAREN_CLOSE,          CT_BRACE_OPEN            },
   { CT_SPAREN_CLOSE,          CT_FUNC_CALL             },
   { CT_SPAREN_CLOSE,          CT_WORD                  },
   { CT_SQL_ASSIGN,            CT_FUNC_CALL             },
   { CT_SQL_ASSIGN,            CT_WORD                  },
   { CT_SQL_BEGIN,             CT_SQL_WORD              },
   { CT_SQL_END,               CT_SQL_WORD              },
   { CT_SQL_EXEC,              CT_SQL_WORD              },
   { CT_SQL_WORD,              CT_COLON                 },
   { CT_SQL_WORD,              CT_PAREN_OPEN            },
   { CT_SQL_WORD,              CT_SQL_WORD              },
   { CT_SQUARE_CLOSE,          CT_ATTRIBUTE             },
   { CT_SQUARE_CLOSE,          CT_BRACE_OPEN            },
   { CT_SQUARE_CLOSE,          CT_COLON                 },
   { CT_SQUARE_CLOSE,          CT_EXECUTION_CONTEXT     },
   { CT_SQUARE_CLOSE,          CT_OC_MSG_NAME           },
   { CT_SQUARE_CLOSE,          CT_STRING                },
   { CT_SQUARE_CLOSE,          CT_WORD                  },
   { CT_STATE,                 CT_TYPE                  },
   { CT_STOCK,                 CT_QUALIFIER             },
   { CT_STOCK,                 CT_TAG                   },
   { CT_STRING,                CT_ATTRIBUTE             },
   { CT_STRING,                CT_BRACE_OPEN            },
   { CT_STRING,                CT_COLON                 },
   { CT_STRING,                CT_CONCAT                },
   { CT_STRING,                CT_OC_MSG_NAME           },
   { CT_STRING,                CT_PAREN_OPEN            },
   { CT_STRING,                CT_STRUCT                },
   { CT_STRING,                CT_TYPE                  },
   { CT_STRING,                CT_WORD                  },
   { CT_STRUCT,                CT_BRACE_OPEN            },
   { CT_STRUCT,                CT_CLASS_COLON           },
   { CT_STRUCT,                CT_MACRO_FUNC_CALL       },
   { CT_STRUCT,                CT_TYPE                  },
   { CT_STRUCT,                CT_WORD                  },
   { CT_TEMPLATE,              CT_CLASS                 },
   { CT_TEMPLATE,              CT_TYPE                  },
   { CT_THIS,                  CT_OC_MSG_NAME           },
   { CT_THIS,                  CT_TYPE                  },
   { CT_TSQUARE,               CT_BRACE_OPEN            },
   { CT_TSQUARE,               CT_PAREN_OPEN            },
   { CT_TSQUARE,               CT_WORD                  },
   { CT_TYPEDEF,               CT_ENUM                  },
   { CT_TYPEDEF,               CT_FUNC_TYPE             },
   { CT_TYPEDEF,               CT_PAREN_OPEN            },
   { CT_TYPEDEF,               CT_QUALIFIER             },
   { CT_TYPEDEF,               CT_STRUCT                },
   { CT_TYPEDEF,               CT_TYPE                  },
   { CT_TYPEDEF,               CT_TYPENAME              },
   { CT_TYPEDEF,               CT_UNION                 },
   { CT_TYPENAME,              CT_ELLIPSIS              },
   { CT_TYPENAME,              CT_WORD                  },
   { CT_UNION,                 CT_BRACE_OPEN            },
   { CT_UNION,                 CT_TYPE                  },
   { CT_UNION,                 CT_WORD                  },
   { CT_USING,                 CT_NAMESPACE             },
   { CT_USING,                 CT_TYPE                  },
   { CT_USING,                 CT_WORD                  },
   { CT_USING_STMT,            CT_PAREN_OPEN            },
   { CT_VOLATILE,              CT_BRACE_OPEN            },
   { CT_WHERE_COLON,           CT_CS_PROPERTY           },
   { CT_WHERE_COLON,           CT_NEW                   },
   { CT_WHERE_COLON,           CT_TYPE                  },
   { CT_WHERE_COLON,           CT_WORD                  },
   { CT_WHERE_SPEC,            CT_WORD                  },
   { CT_WORD,                  CT_ATTRIBUTE             },
   { CT_WORD,                  CT_BRACE_OPEN            },
   { CT_WORD,                  CT_CLASS_COLON           },
   { CT_WORD,                  CT_COLON                 },
   { CT_WORD,                  CT_COMMENT_CPP           },
   { CT_WORD,                  CT_CONCAT                },
   { CT_WORD,                  CT_ELLIPSIS              },
   { CT_WORD,                  CT_IN                    },
   { CT_WORD,                  CT_NEW                   },
   { CT_WORD,                  CT_NOT                   },
   { CT_WORD,                  CT_NUMBER                },
   { CT_WORD,                  CT_NUMBER_FP             },
   { CT_WORD,                  CT_OPERATOR              },
   { CT_WORD,                  CT_QUALIFIER             },
   { CT_WORD,                  CT_QUESTION              },
   { CT_WORD,                  CT_SCOMPARE              },
   { CT_WORD,                  CT_SQL_ASSIGN            },
   { CT_WORD,                  CT_STRING                },
   { CT_WORD,                  CT_STRUCT                },
   { CT_WORD,                  CT_TYPE                  },
   { CT_WORD,                  CT_TYPE_CAST             },
   { CT_WORD,                  CT_TYPEDEF               },
   { CT_WORD,                  CT_WHERE_COLON           },
   { CT_WORD,                  CT_WHERE_SPEC            },
   { CT_WORD,                  CT_WORD                  },
};

/**
 * this table lists out all combos where a space should NOT be present
 * CT_UNKNOWN is a wildcard.
 *
 * TODO: some of these are no longer needed.
 */
const no_space_table_t no_space_table[] =
{
   { CT_OC_AT,          CT_UNKNOWN      },
   { CT_INCDEC_BEFORE,  CT_WORD         },
   { CT_UNKNOWN,        CT_INCDEC_AFTER },
   { CT_UNKNOWN,        CT_LABEL_COLON  },
   { CT_UNKNOWN,        CT_ACCESS_COLON },
   { CT_UNKNOWN,        CT_SEMICOLON    },
   { CT_UNKNOWN,        CT_D_TEMPLATE   },
   { CT_D_TEMPLATE,     CT_UNKNOWN      },
   { CT_MACRO_FUNC,     CT_FPAREN_OPEN  },
   { CT_PAREN_OPEN,     CT_UNKNOWN      },
   { CT_UNKNOWN,        CT_PAREN_CLOSE  },
   { CT_FPAREN_OPEN,    CT_UNKNOWN      },
   { CT_UNKNOWN,        CT_SPAREN_CLOSE },
   { CT_SPAREN_OPEN,    CT_UNKNOWN      },
   { CT_UNKNOWN,        CT_FPAREN_CLOSE },
   { CT_UNKNOWN,        CT_COMMA        },
   { CT_POS,            CT_UNKNOWN      },
   { CT_STAR,           CT_UNKNOWN      },
   { CT_VBRACE_CLOSE,   CT_UNKNOWN      },
   { CT_VBRACE_OPEN,    CT_UNKNOWN      },
   { CT_UNKNOWN,        CT_VBRACE_CLOSE },
   { CT_UNKNOWN,        CT_VBRACE_OPEN  },
   { CT_PREPROC,        CT_UNKNOWN      },
   { CT_PREPROC_INDENT, CT_UNKNOWN      },
   { CT_NEG,            CT_UNKNOWN      },
   { CT_UNKNOWN,        CT_SQUARE_OPEN  },
   { CT_UNKNOWN,        CT_SQUARE_CLOSE },
   { CT_SQUARE_OPEN,    CT_UNKNOWN      },
   { CT_PAREN_CLOSE,    CT_WORD         },
   { CT_PAREN_CLOSE,    CT_FUNC_DEF     },
   { CT_PAREN_CLOSE,    CT_FUNC_CALL    },
   { CT_PAREN_CLOSE,    CT_ADDR         },
   { CT_PAREN_CLOSE,    CT_FPAREN_OPEN  },
   { CT_OC_SEL_NAME,    CT_OC_SEL_NAME  },
   { CT_TYPENAME,       CT_TYPE         },
};

/**
 * this table lists out all combos where nothing is to do
 * CT_UNKNOWN is a wildcard.
 *
 * TODO: some of these are no longer needed.
 */
const no_space_table_t IGNORE_space_table[] =
{
   { CT_NUMBER_FP,    CT_PAREN_OPEN},
   { CT_PAREN_CLOSE,    CT_SIZEOF},
   { CT_SQUARE_CLOSE,   CT_INCDEC_BEFORE},
};


// *INDENT-ON*
